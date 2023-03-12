#pragma once
#if ray_major >= 0 and ray_middle >= 0 and ray_minor >= 1

namespace Ray::Meta
{
    namespace Detail
    {
        template<class, class> class Same
        {
        public:
            static consteval bool Value()
            {
                return false;
            }
        };

        template<class T> class Same<T, T>
        {
        public:
            static consteval bool Value()
            {
                return true;
            }
        };
    }

    template<class T, class U> concept Same = Detail::Same<T, U>::Value();
}

#endif