# Macros

## fwd

```cpp
#define fwd(x) static_cast<decltype(x)&&>(x)
```

Returns a collapsed reference to the type of the given input ``x`` that preserves the original value category, which can then be used to perform perfect forwarding.

Usage:
```cpp
#include <iostream>
#include <Core/Move.hpp>
#include <Core/Forward.hpp>

class foo
{
public:
	bool b = false;

	foo(bool&& value) : b(value)
	{
		std::cout << "forward!\n";
	}

	foo(const bool& value) : b(value)
	{
		std::cout << "not forward!\n";
	}
};

class move_forward
{
public:
	foo f;

	move_forward(bool&& b) : f(fwd(b)){}

	move_forward(const bool& b) : f(b){}
};

int main()
{
	bool b = true;
	move_forward mf(b); // not forward!
	move_forward mf2(Move(b)); // forward!
}
```