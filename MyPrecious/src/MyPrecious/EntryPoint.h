#pragma once

#ifdef MP_PLATFORM_WINDOWS

extern MyPrecious::Application* MyPrecious::CreateApplication();

int main(int argc, char** argv)
{
	auto app = MyPrecious::CreateApplication();
	app->Run();
	delete app;
}
#endif