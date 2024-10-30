#include <Core.h>
#include <iostream>

class Sandbox : public Core::Application {

public:
	Sandbox() { std::cout << "Welcome to a test sandbox application."; }
	~Sandbox() {}

};

Core::Application* Core::CreateApplication() {

	return new Sandbox();

}