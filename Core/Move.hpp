#pragma once
#if ray_major >= 0 and ray_middle >= 0 and ray_minor >= 1
#include <Meta/RemoveReferences.hpp>

namespace Ray
{
    template<class T> [[nodiscard]] constexpr auto Move(T&& value) noexcept -> Meta::RemoveReferences<T>&&
    {
        return static_cast<Meta::RemoveReferences<T>&&>(value);
    }
}

#endif