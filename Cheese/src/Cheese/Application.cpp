#include "hzpch.h"
#include "Application.h"

#include "Cheese/Events/ApplicationEvent.h"
#include "Cheese/Log.h"

namespace Cheese {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WIndowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategory::EventCategoryApplication))
		{
			CS_TRACE(e);
		}

		if (e.IsInCategory(EventCategory::EventCategoryInput))
		{
			CS_TRACE(e);
		}

		while (true)
		{

		}
	}

}