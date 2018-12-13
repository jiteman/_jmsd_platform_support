#pragma once


#include "compiler_detection_actual.h"


#if defined( JMSD_GNU_CCPP_COMPILER_IS_DETECTED )
	#include "gccpp/gcc_suppress_compilation_warnings.h"

#elif defined( JMSD_MICROSOFT_VISUAL_CPP_COMPILER_IS_DETECTED )
	#include "ms_visual_cpp/ms_vcpp_suppress_compilation_warnings.h"

#else
	#error This file "jmsd/platform_support/platform_detection/compilers/suppress_compilation_warnings_actual.h" - no supported compiler is detected.

#endif
