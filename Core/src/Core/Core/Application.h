#pragma once

namespace Core {

	class Application {

	public:
		Application();
		virtual ~Application();

		void Run();

	};

	Application* CreateApplication();

}