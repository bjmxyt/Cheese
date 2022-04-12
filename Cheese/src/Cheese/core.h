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

#ifdef HZ_ENABLE_ASSERTS
	#define CS_ASSERT(x, ...) { if(!(x)) { CS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define CS_CORE_ASSERT(x, ...) { if(!(x)) { CS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define CS_ASSERT(x, ...)
	#define CS_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)