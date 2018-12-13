#pragma once


#include "jmsd/platform_support/platform_detection/compilers/compiler_detection_actual.h"


#if !defined( JMSD_MICROSOFT_VISUAL_CPP_COMPILER_IS_DETECTED )
	#error This file "jmsd/platform_support/platform_detection/compilers/ms_visual_cpp/ms_vcpp_suppress_compilation_warnings.h" is included, but there is no MS Visual C++ compiler detected.

#endif


// #pragma warning( disable: 4001 )
#pragma warning( disable: 4250 ) // inherits via dominance
#pragma warning( disable: 4251 ) // class needs to have dll-interface to be used by clients of class
#pragma warning( disable: 4435 ) // Object layout under /vd2 will change due to virtual base
#pragma warning( disable: 4514 ) // unreferenced inline function has been removed
#pragma warning( disable: 4571 ) // Informational: catch(...) semantics changed since Visual C++ 7.1; structured exceptions (SEH) are no longer caught
#pragma warning( disable: 4640 ) // construction of local static object is not thread-safe
#pragma warning( disable: 4710 ) // function not inlined
#pragma warning( disable: 4711 ) // function selected for automatic inline expansion
#pragma warning( disable: 4820 ) // 'N' bytes padding added after data member
//#pragma warning( disable:  )
