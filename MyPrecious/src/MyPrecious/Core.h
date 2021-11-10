#pragma once

#ifdef MP_PLATFORM_WINDOWS
	#ifdef MP_BUILD_DLL
		#define MYPRECIOUS_API __declspec(dllexport)
	#else
		#define MYPRECIOUS_API __declspec(dllimport)
	#endif
#else
	#error MyPrecious only supports Windows.
#endif