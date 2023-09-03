#include <Victory.h>

class Sandbox : public Victory::Application
{
public:
    Sandbox(){};

    ~Sandbox() = default;

};

Victory::Application* Victory::CreateApplication()
{
    return new Sandbox();
}