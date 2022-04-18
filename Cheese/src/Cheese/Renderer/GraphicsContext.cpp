#include "hzpch.h"
#include "Cheese/Renderer/GraphicsContext.h"

#include "Cheese/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace Cheese {

	Scope<GraphicsContext> GraphicsContext::Create(void* window)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:    CS_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
		case RendererAPI::API::OpenGL:  return CreateScope<OpenGLContext>(static_cast<GLFWwindow*>(window));
		}

		CS_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}