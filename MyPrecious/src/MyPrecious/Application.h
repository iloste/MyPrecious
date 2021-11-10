#pragma once
#include "Core.h"

namespace MyPrecious
{
	class MYPRECIOUS_API Application
	{
	public :
		Application();
		virtual ~Application();
		void Run();
	};

	// to be defined by client
	Application* CreateApplication();

}