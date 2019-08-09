#include <stdint_ext/stdint_ext.hpp>

// unsigned 8, 16, 32, 64
static_assert(std::is_same<std::uint8_t, ext::parametric_integer_t<8, false>>::value, "");
static_assert(std::is_same<std::uint16_t, ext::parametric_integer_t<16, false>>::value, "");
static_assert(std::is_same<std::uint32_t, ext::parametric_integer_t<32, false>>::value, "");
static_assert(std::is_same<std::uint64_t, ext::parametric_integer_t<64, false>>::value, "");

static_assert(std::is_same<std::uint8_t, ext::unsigned_parametric_integer_t<8>>::value, "");
static_assert(std::is_same<std::uint16_t, ext::unsigned_parametric_integer_t<16>>::value, "");
static_assert(std::is_same<std::uint32_t, ext::unsigned_parametric_integer_t<32>>::value, "");
static_assert(std::is_same<std::uint64_t, ext::unsigned_parametric_integer_t<64>>::value, "");

// signed 8, 16, 32, 64
static_assert(std::is_same<std::int8_t, ext::parametric_integer_t<8, true>>::value, "");
static_assert(std::is_same<std::int16_t, ext::parametric_integer_t<16, true>>::value, "");
static_assert(std::is_same<std::int32_t, ext::parametric_integer_t<32, true>>::value, "");
static_assert(std::is_same<std::int64_t, ext::parametric_integer_t<64, true>>::value, "");

static_assert(std::is_same<std::int8_t, ext::signed_parametric_integer_t<8>>::value, "");
static_assert(std::is_same<std::int16_t, ext::signed_parametric_integer_t<16>>::value, "");
static_assert(std::is_same<std::int32_t, ext::signed_parametric_integer_t<32>>::value, "");
static_assert(std::is_same<std::int64_t, ext::signed_parametric_integer_t<64>>::value, "");

// half size of 16, 32, 64
static_assert(std::is_same<std::uint8_t, ext::make_half_sized_t<std::uint16_t>>::value, "");
static_assert(std::is_same<std::uint16_t, ext::make_half_sized_t<std::uint32_t>>::value, "");
static_assert(std::is_same<std::uint32_t, ext::make_half_sized_t<std::uint64_t>>::value, "");

// double size of 8, 16, 32
static_assert(std::is_same<std::uint16_t, ext::make_double_sized_t<std::uint8_t>>::value, "");
static_assert(std::is_same<std::uint32_t, ext::make_double_sized_t<std::uint16_t>>::value, "");
static_assert(std::is_same<std::uint64_t, ext::make_double_sized_t<std::uint32_t>>::value, "");

int main()
{
}
