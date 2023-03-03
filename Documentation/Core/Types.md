# Assertions

The following assertions were performed:

- ``bool`` size's must be 1-byte.
- ``unsigned char`` size's must be 1-byte.
- ``signed char`` size's must be 1-byte.
- ``unsigned short`` size's must be 2-bytes.
- ``signed short`` size's must be 2-bytes.
- ``_Float16`` size's must be 2-bytes.
- ``unsigned int`` size's must be 4-bytes.
- ``signed int`` size's must be 4-bytes.
- ``float`` size's must be 4-bytes.
- ``unsigned long long int`` size's must be 8-bytes.
- ``signed long long int`` size's must be 8-bytes.
- ``double`` size's must be 8-bytes.




# Aliases

## Ray::u8

```cpp
using u8 = unsigned char;
```

1-byte unsigned integer.

Usage:
```cpp
Ray::u8 foo(10u);
```


## Ray::s8

```cpp
using s8 = signed char;
```

1-byte signed integer.

Usage:
```cpp
Ray::s8 foo(10);
```


## Ray::u16

```cpp
using u16 = unsigned short;
```

2-bytes unsigned integer.

Usage:
```cpp
Ray::u16 foo(10u);
```


## Ray::s16

```cpp
using s16 = signed short;
```

2-bytes signed integer.

Usage:
```cpp
Ray::s16 foo(10);
```


## Ray::f16

```cpp
using f16 = _Float16;
```

2-bytes scalar half-precision floating-point.

Usage:
```cpp
Ray::f16 foo(10.f16);
```


## Ray::u32

```cpp
using u32 = unsigned int;
```

4-bytes unsigned integer.

Usage:
```cpp
Ray::u32 foo(10ul);
```


## Ray::s32

```cpp
using s32 = signed int;
```

4-bytes signed integer.

Usage:
```cpp
Ray::s32 foo(10l);
```


## Ray::f32

```cpp
using f32 = float;
```

4-bytes scalar single-precision floating-point.

Usage:
```cpp
Ray::f32 foo(10.f);
```


## Ray::u64

```cpp
using u64 = unsigned long long int;
```

8-bytes unsigned integer.

Usage:
```cpp
Ray::u64 foo(10ull);
```


## Ray::s64

```cpp
using s64 = signed long long int;
```

8-bytes signed integer.

Usage:
```cpp
Ray::s64 foo(10ll);
```


## Ray::f64

```cpp
using f64 = double;
```

8-bytes scalar double-precision floating-point.

Usage:
```cpp
Ray::f64 foo(10.);
```