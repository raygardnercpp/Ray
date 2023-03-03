# Aliases

## Ray::Meta::RemoveReferences

```cpp
template<class T> using RemoveReferences = Detail::RemoveReferences<T>::Type;
```

Removes any reference qualifiers from a given type `T`. This can be useful in generic programming scenarios where you want to strip away any reference modifiers in order to operate on the underlying type.

Usage:
```cpp
#include <iostream>
#include <Meta/Same.hpp>
#include <Meta/RemoveReferences.hpp>

using namespace ::Ray::Meta;

int main()
{
	bool x = false;
	bool& ref_x = x;
	bool&& rref_x = true;
	
	std::cout << Same<RemoveReferences<decltype(x)>, bool> << '\n'; // true
	std::cout << Same<RemoveReferences<decltype(ref_x)>, bool> << '\n'; // true
	std::cout << Same<RemoveReferences<decltype(rref_x)>, bool>; // true
}
```