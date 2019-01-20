#pragma once
namespace mira
{
	class Application
	{
	public:
		virtual void run() = 0;
	};
	Application* CreateApplication();

	void init_log();

}
/*Need to be define in the client side. 
	Is a Application factory. The application return is the main application of the software*/
extern mira::Application* mira::CreateApplication();

// Entry point
int main(int argc, char** argv)
{
	mira::init_log();
	mira::Application* app = mira::CreateApplication();
	app->run();
	delete app;
}

