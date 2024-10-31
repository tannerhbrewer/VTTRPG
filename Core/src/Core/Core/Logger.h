#pragma once

#include <memory>

#include <spdlog/spdlog.h>

namespace Core {

	class Logger {

	public:
		static void Initialize();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

#define CORE_TRACE(...) ::Core::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_INFO(...) ::Core::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_WARN(...) ::Core::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_ERROR(...) ::Core::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_CRITICAL(...) ::Core::Logger::GetCoreLogger()->critical(__VA_ARGS__)

#define APP_TRACE(...) ::Core::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define APP_INFO(...) ::Core::Logger::GetClientLogger()->info(__VA_ARGS__)
#define APP_WARN(...) ::Core::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define APP_ERROR(...) ::Core::Logger::GetClientLogger()->error(__VA_ARGS__)
#define APP_CRITICAL(...) ::Core::Logger::GetClientLogger()->critical(__VA_ARGS__)