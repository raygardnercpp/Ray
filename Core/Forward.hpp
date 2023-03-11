#pragma once
#if ray_major >= 0 and ray_middle >= 0 and ray_minor >= 1
#define fwd(x) static_cast<decltype(x)&&>(x)
#endif