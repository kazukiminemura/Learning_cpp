#ifndef PCH_H_
#define PCH_H_

#ifdef NDEBUG
#include "Release/pch_base.h"
#else
#include "Debug/pch_base.h"
#endif

#endif // #ifndef PCH_H_
