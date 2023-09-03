#include "Application.h"

namespace Victory
{
    Application* Application::s_Instance = nullptr;

    Victory::Application::Application()
    {
        s_Instance = this;
    }

    Victory::Application::~Application()
    {
    }

    void Application::Run()
    {
        while (m_IsRunning)
        {
        }
    }
}