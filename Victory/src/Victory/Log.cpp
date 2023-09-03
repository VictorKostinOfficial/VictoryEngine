#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Victory
{
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_SandboxLogger;

    void Log::Init()
    {
        spdlog::set_pattern("%^[%T] %n: %v%$");

        s_CoreLogger = spdlog::stdout_color_mt("Victory");
        s_CoreLogger->set_level(spdlog::level::trace);

        s_SandboxLogger = spdlog::stdout_color_mt("Sandbox");
        s_SandboxLogger->set_level(spdlog::level::trace);
    }
}
