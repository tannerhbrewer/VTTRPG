#include <Core.h>
#include <iostream>

class Sandbox : public Core::Application {

public:
	Sandbox() { APP_INFO("Welcome to the sandbox application!"); }
	~Sandbox() {}

};

Core::Application* Core::CreateApplication() {

	return new Sandbox();

}