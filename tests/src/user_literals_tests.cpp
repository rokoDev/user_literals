#include <gtest/gtest.h>

#include <type_traits>

#include "user_literals/user_literals.h"

TEST(UserLiterals, uzCheker)
{
    static_assert(std::is_same_v<decltype(101_uz), std::size_t>,
                  "Invalid type.");
}

TEST(UserLiterals, i8Cheker)
{
    static_assert(std::is_same_v<decltype(101_i8), std::int8_t>,
                  "Invalid type.");
}

TEST(UserLiterals, u8Cheker)
{
    static_assert(std::is_same_v<decltype(101_u8), std::uint8_t>,
                  "Invalid type.");
}

TEST(UserLiterals, i16Cheker)
{
    static_assert(std::is_same_v<decltype(101_i16), std::int16_t>,
                  "Invalid type.");
}

TEST(UserLiterals, u16Cheker)
{
    static_assert(std::is_same_v<decltype(101_u16), std::uint16_t>,
                  "Invalid type.");
}

TEST(UserLiterals, i32Cheker)
{
    static_assert(std::is_same_v<decltype(101_i32), std::int32_t>,
                  "Invalid type.");
}

TEST(UserLiterals, u32Cheker)
{
    static_assert(std::is_same_v<decltype(101_u32), std::uint32_t>,
                  "Invalid type.");
}

TEST(UserLiterals, i64Cheker)
{
    static_assert(std::is_same_v<decltype(101_i64), std::int64_t>,
                  "Invalid type.");
}

TEST(UserLiterals, u64Cheker)
{
    static_assert(std::is_same_v<decltype(101_u64), std::uint64_t>,
                  "Invalid type.");
}

TEST(UserLiterals, if8Cheker)
{
    static_assert(std::is_same_v<decltype(101_if8), std::int_fast8_t>,
                  "Invalid type.");
}

TEST(UserLiterals, uf8Cheker)
{
    static_assert(std::is_same_v<decltype(101_uf8), std::uint_fast8_t>,
                  "Invalid type.");
}

TEST(UserLiterals, if16Cheker)
{
    static_assert(std::is_same_v<decltype(101_if16), std::int_fast16_t>,
                  "Invalid type.");
}

TEST(UserLiterals, uf16Cheker)
{
    static_assert(std::is_same_v<decltype(101_uf16), std::uint_fast16_t>,
                  "Invalid type.");
}

TEST(UserLiterals, if32Cheker)
{
    static_assert(std::is_same_v<decltype(101_if32), std::int_fast32_t>,
                  "Invalid type.");
}

TEST(UserLiterals, uf32Cheker)
{
    static_assert(std::is_same_v<decltype(101_uf32), std::uint_fast32_t>,
                  "Invalid type.");
}

TEST(UserLiterals, if64Cheker)
{
    static_assert(std::is_same_v<decltype(101_if64), std::int_fast64_t>,
                  "Invalid type.");
}

TEST(UserLiterals, uf64Cheker)
{
    static_assert(std::is_same_v<decltype(101_uf64), std::uint_fast64_t>,
                  "Invalid type.");
}

TEST(UserLiterals, imaxCheker)
{
    static_assert(std::is_same_v<decltype(101_imax), std::intmax_t>,
                  "Invalid type.");
}

TEST(UserLiterals, umaxCheker)
{
    static_assert(std::is_same_v<decltype(101_umax), std::uintmax_t>,
                  "Invalid type.");
}

TEST(UserLiterals, intptrCheker)
{
    static_assert(std::is_same_v<decltype(101_intptr), std::intptr_t>,
                  "Invalid type.");
}

TEST(UserLiterals, uintptrCheker)
{
    static_assert(std::is_same_v<decltype(101_uintptr), std::uintptr_t>,
                  "Invalid type.");
}
