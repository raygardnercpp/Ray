#pragma once
#if ray_major >= 0 and ray_middle >= 0 and ray_minor >= 1

namespace Ray::Meta
{
    namespace Detail
    {
        template<class T> class RemoveReferences
        {
        public:
            using Type = T;
        };

        template<class T> class RemoveReferences<T&>
        {
        public:
            using Type = T;
        };

        template<class T> class RemoveReferences<T&&>
        {
        public:
            using Type = T;
        };
    }

    template<class T> using RemoveReferences = Detail::RemoveReferences<T>::Type;
}

#endif