#pragma once


#include "jmsd/platform_support/common_preprocessor_constants.h"


#if defined( __STDC__ )
	#define JMSD_STDC_DEFINED		JMSD_CPP_TRUE
	#define JMSD_STDC_DEFINED_C		JMSD_C_TRUE
#else
	#define JMSD_STDC_DEFINED		JMSD_CPP_TRUE
	#define JMSD_STDC_DEFINED_C		JMSD_C_FALSE
#endif


#define JMSD_C95_VERSION_CONSTANT		199409L
#define JMSD_C99_VERSION_CONSTANT		199901L
#define JMSD_C11_VERSION_CONSTANT		201112L

#if defined( __STDC_VERSION__ )
	#define JMSD_STDC_VERSION_IS_DEFINED		JMSD_CPP_TRUE
	#define JMSD_STDC_VERSION_IS_DEFINED_C		JMSD_C_TRUE
	#define JMSD_STDC_VERSION_VALUE				__STDC_VERSION__
#else
	#define JMSD_STDC_VERSION_IS_DEFINED_C		JMSD_C_FALSE
	#define JMSD_STDC_VERSION_VALUE				JMSD_UNKNOWN_LITERAL
#endif


#if defined( JMSD_STDC_DEFINED ) || defined( JMSD_STDC_VERSION_IS_DEFINED )
	#define JMSD_C_STANDARD_LABRARY_IS_DEFINED		JMSD_CPP_TRUE
	#define JMSD_C_STANDARD_LABRARY_IS_DEFINED_C	JMSD_C_TRUE
#else
	#define JMSD_C_STANDARD_LABRARY_IS_DEFINED		JMSD_CPP_TRUE
	#define JMSD_C_STANDARD_LABRARY_IS_DEFINED_C	JMSD_C_FALSE
#endif