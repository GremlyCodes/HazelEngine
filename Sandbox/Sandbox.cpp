#include <Hazel.h>
//#include "HazelEngine\src\Hazel\Hazel.h"

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