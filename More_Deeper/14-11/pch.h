#ifndef PCH_H_
#define PCH_H_

#ifdef NDEBUG
#include "Release/gen_pch.h"
#else
#include "Debug/gen_pch.h"
#endif

#endif // #ifndef PCH_H_
