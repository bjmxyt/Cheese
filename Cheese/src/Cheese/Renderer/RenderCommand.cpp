#include "hzpch.h"
#include "Cheese/Renderer/RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace Cheese {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}