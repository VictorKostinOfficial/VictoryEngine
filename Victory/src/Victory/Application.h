#pragma once

namespace Victory
{
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();

    private:
        static Application* s_Instance;

        bool m_IsRunning{true};
    };

    Application* CreateApplication();
}