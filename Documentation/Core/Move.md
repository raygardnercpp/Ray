# Functions

## Ray::Move

```cpp
template<class T> [[nodiscard]] constexpr auto Move(T&& value) noexcept -> Meta::RemoveReferences<T>&&;
```

Returns a xvalue reference of a given type ``T`` to the input object. This can be useful for avoiding unnecessary copies and improving performance in certain cases.

It should be used to transfer ownership, where the object is no longer needed by the original owner. It's important to ensure that the object being moved is still valid and has well-defined move semantics.

After an object has been moved from, it is left in a valid but unspecified state. This means that you can still perform operations on it that have no preconditions. For example, you can assign a new value to it or call methods that don’t depend on its current state.

However, accessing its value or calling methods that do depend on its current state may result in undefined behavior.

Usage:
```cpp
#include <iostream>
#include <Core/Move.hpp>

using namespace ::Ray;

class foo
{
public:
	explicit foo(const int&)
	{
		std::cout << '\n' << "Copy!";
	}

	explicit foo(int&&)
	{
		std::cout << '\n' << "Move!";
	}
};

int main()
{
	int a = 87;
	foo f1(a);
	foo f2(Move(a));
}
```