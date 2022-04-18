#include "hzpch.h"
#include "Cheese/Core/Window.h"

#ifdef HZ_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Cheese
{

	Scope<Window> Window::Create(const WindowProps& props)
	{
#ifdef HZ_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
#else
		CS_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
#endif
	}

}