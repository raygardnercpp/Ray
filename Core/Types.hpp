#pragma once
#if ray_major >= 0 and ray_middle >= 0 and ray_minor >= 1

static_assert(sizeof(bool) == 1ull);

static_assert(sizeof(unsigned char) == 1ull);

static_assert(sizeof(signed char) == 1ull);

static_assert(sizeof(unsigned short) == 2ull);

static_assert(sizeof(signed short) == 2ull);

static_assert(sizeof(_Float16) == 2ull);

static_assert(sizeof(unsigned int) == 4ull);

static_assert(sizeof(signed int) == 4ull);

static_assert(sizeof(float) == 4ull);

static_assert(sizeof(unsigned long long int) == 8ull);

static_assert(sizeof(signed long long int) == 8ull);

static_assert(sizeof(double) == 8ull);

namespace Ray
{
    using u8 = unsigned char;

    using s8 = signed char;

    using u16 = unsigned short;

    using s16 = signed short;

    using f16 = _Float16;

    using u32 = unsigned int;

    using s32 = signed int;

    using f32 = float;

    using u64 = unsigned long long int;

    using s64 = signed long long int;

    using f64 = double;
}

#endif