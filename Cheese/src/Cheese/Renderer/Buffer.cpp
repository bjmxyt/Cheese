#include "hzpch.h"
#include "Cheese/Renderer/Buffer.h"

#include "Cheese/Renderer/Renderer.h"

#include "Platform/OpenGL/OpenGLBuffer.h"

namespace Cheese {

	Ref<VertexBuffer> VertexBuffer::Create(float* vertices, uint32_t size)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:    CS_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
		case RendererAPI::API::OpenGL:  return CreateRef<OpenGLVertexBuffer>(vertices, size);
		}

		CS_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

		Ref<IndexBuffer> IndexBuffer::Create(uint32_t* indices, uint32_t size)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:    CS_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
		case RendererAPI::API::OpenGL:  return CreateRef<OpenGLIndexBuffer>(indices, size);
		}

		CS_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}