#include <MyPrecious.h>

class Sandbox : public MyPrecious::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

MyPrecious::Application* MyPrecious::CreateApplication()
{
	return new Sandbox();
}