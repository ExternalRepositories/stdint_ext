#ifndef STDINT_EXT_HPP
#define STDINT_EXT_HPP

#include <climits>     // CHAR_BIT
#include <cstddef>     // std::size_t
#include <cstdint>     // std::int##_t, std::uint##_t
#include <type_traits> // std::is_signed

namespace ext {
    // parametric integer class template
    // ========================================

    namespace detail {
        template<std::size_t N, bool S>
        struct parametric_integer {
            // using type = ...
        };

        template<>
        struct parametric_integer<8, false> {
            using type = std::uint8_t;
        };

        template<>
        struct parametric_integer<8, true> {
            using type = std::int8_t;
        };

        template<>
        struct parametric_integer<16, false> {
            using type = std::uint16_t;
        };

        template<>
        struct parametric_integer<16, true> {
            using type = std::int16_t;
        };

        template<>
        struct parametric_integer<32, false> {
            using type = std::uint32_t;
        };

        template<>
        struct parametric_integer<32, true> {
            using type = std::int32_t;
        };

        template<>
        struct parametric_integer<64, false> {
            using type = std::uint64_t;
        };

        template<>
        struct parametric_integer<64, true> {
            using type = std::int64_t;
        };
    }

    // parametric integer aliases
    // ========================================

    template<std::size_t N, bool S>
    using parametric_integer_t = typename detail::parametric_integer<N, S>::type;

    template<std::size_t N>
    using unsigned_parametric_integer_t = parametric_integer_t<N, false>;

    template<std::size_t N>
    using signed_parametric_integer_t = parametric_integer_t<N, true>;

    // integer type modifications
    // ========================================

    template<class T>
    using make_half_sized_t = parametric_integer_t<sizeof(T) * CHAR_BIT / 2, std::is_signed<T>::value>;

    template<class T>
    using make_double_sized_t = parametric_integer_t<sizeof(T) * CHAR_BIT * 2, std::is_signed<T>::value>;
}

#endif // STDINT_EXT_HPP
