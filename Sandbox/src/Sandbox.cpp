#include <Victory.h>

class Sandbox final: public Victory::Application
{
public:
    Sandbox() = default;
    ~Sandbox() = default;
};

Victory::Application* Victory::CreateApplication()
{
    return new Sandbox();
}