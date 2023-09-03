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
        bool m_IsRunning{true};

        static Application* s_Instance;
    };

    Application* CreateApplication();
}