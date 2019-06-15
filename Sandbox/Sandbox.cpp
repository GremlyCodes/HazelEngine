#include <Hazel.h>

class Sandbox : public Hazel::Application 
{
public:
	//ctor
	Sandbox() {}

	//dtor
	~Sandbox() {}
};

/*int main() 
{
	//here
}*/

Hazel::Application* Hazel::CreateApplication() 
{
	return new Sandbox();
}