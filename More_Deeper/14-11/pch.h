#ifndef PCH_H_
#define PCH_H_

#ifdef NDEBUG
// #include "Release/gen_pch.h"
#include "pch_base.h"
#else
// #include "Debug/gen_pch.h"
#include "pch_base.h"
#endif

#endif // #ifndef PCH_H_
