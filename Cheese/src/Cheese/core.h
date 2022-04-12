#pragma once

#ifdef CS_PLATFORM_WINDOWS
	#ifdef CS_BUILD_DLL
		#define CS_API __declspec(dllexport)
	#else
		#define CS_API __declspec(dllimport)
	#endif
#else
	#error Cheese only supports Windows!
#endif