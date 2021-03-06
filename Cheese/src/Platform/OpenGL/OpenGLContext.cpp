#include "hzpch.h"
#include "Platform/OpenGL/OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <GL/GL.h>

namespace Cheese {

	OpenGLContext::OpenGLContext(GLFWwindow* windowHandle)
		: m_WindowHandle(windowHandle)
	{
		CS_CORE_ASSERT(windowHandle, "Window handle is null!")
	}

	void OpenGLContext::Init()
	{
		CS_PROFILE_FUNCTION();

		glfwMakeContextCurrent(m_WindowHandle);
		int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		CS_CORE_ASSERT(status, "Failed to initialize Glad!");


		CS_CORE_INFO("OpenGL Info:");
		CS_CORE_INFO("  Vendor: {0}", glGetString(GL_VENDOR));
		CS_CORE_INFO("  Renderer: {0}", glGetString(GL_RENDERER));
		CS_CORE_INFO("  Version: {0}", glGetString(GL_VERSION));

#ifdef CS_ENABLE_ASSERTS
		int versionMajor;
		int versionMinor;
		glGetIntegerv(GL_MAJOR_VERSION, &versionMajor);
		glGetIntegerv(GL_MINOR_VERSION, &versionMinor);

		CS_CORE_ASSERT(versionMajor > 4 || (versionMajor == 4 && versionMinor >= 5), "Cheese requires at least OpenGL version 4.5!");
#endif
	}

	void OpenGLContext::SwapBuffers()
	{
		CS_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}