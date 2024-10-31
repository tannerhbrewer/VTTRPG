#pragma once

extern Core::Application* Core::CreateApplication();

int main(int argc, char** argv) {

	Core::Logger::Initialize();

	CORE_WARN("OMG THIS IS A WARNING!");

	int a = 5;
	CORE_INFO("Here is a variable {0}", a);

	auto app = Core::CreateApplication();
	app->Run();
	delete app;

}