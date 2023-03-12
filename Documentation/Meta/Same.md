# Concepts

## Ray::Meta::Same

```cpp
template<class T, class U> concept Same = Detail::Same<T, U>::Value();
```

Satisfied if the types given by ``T`` & ``U``  are the same. Denote that aliases of types are still considered the same type as the original type.

Usage:
```cpp
#include <iostream>
#include <Meta/Same.hpp>

using namespace ::Ray::Meta;

using floating = float;

int main()
{
    std::cout << std::boolalpha <<
    "Is int the same as int? " << Same<int, int> << '\n' << // true
    "Is int the same as float? " << Same<int, float> << '\n' << // false
    "Is floating the same as float? " << Same<floating, float>; // true
}
```