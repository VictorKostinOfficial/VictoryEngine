#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Victory
{
    class Log final
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetSandboxLogger() { return s_SandboxLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_SandboxLogger;
    };
}

// Core log macros
#define VIC_CORE_TRACE(...)     ::Victory::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VIC_CORE_INFO(...)      ::Victory::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VIC_CORE_WARN(...)      ::Victory::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VIC_CORE_ERROR(...)     ::Victory::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VIC_CORE_FATAL(...)     ::Victory::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Sandbox log macros
#define VIC_TRACE(...)          ::Victory::Log::GetSandboxLogger()->trace(__VA_ARGS__)
#define VIC_INFO(...)           ::Victory::Log::GetSandboxLogger()->info(__VA_ARGS__)
#define VIC_WARN(...)           ::Victory::Log::GetSandboxLogger()->warn(__VA_ARGS__)
#define VIC_ERROR(...)          ::Victory::Log::GetSandboxLogger()->error(__VA_ARGS__)
#define VIC_FATAL(...)          ::Victory::Log::GetSandboxLogger()->fatal(__VA_ARGS__)