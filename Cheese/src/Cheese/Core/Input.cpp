#include "hzpch.h"
#include "Cheese/Core/Input.h"

#ifdef CS_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsInput.h"
#endif

namespace Cheese {

	Scope<Input> Input::s_Instance = Input::Create();

	Scope<Input> Input::Create()
	{
#ifdef HZ_PLATFORM_WINDOWS
		return CreateScope<WindowsInput>();
#else
		CS_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
#endif
	}
}