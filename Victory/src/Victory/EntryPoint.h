#pragma once

extern Victory::Application* Victory::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Victory::CreateApplication();
    app->Run();
    delete app;
    return 0;
}