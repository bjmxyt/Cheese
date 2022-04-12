#pragma once

#include "Core.h"

namespace Cheese {

	class CS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}