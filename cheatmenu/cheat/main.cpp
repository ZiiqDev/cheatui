#include "gui.h"

#include <thread>

int __stdcall wWinMain(
	HINSTANCE instance,
	HINSTANCE previousInstance,
	PWSTR arguments,
	int commandShow)

{
	//Creating GUI 
	gui::CreateHWindow("Ziiqs Test Menu", "Cheat Menu Class");
	gui::CreateDevice;
	gui::CreateImGui;
	gui::CreateImGui;

	while (gui::exit)
	{
		gui::BeginRender();
		gui::Render();
		gui::EndRender();

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	//destroy GUI
	gui::DestroyImGui();
	gui::DestroyDevice(); 
	gui::DestroyHWindow(); //The H in the HWindow = Handle 

	return EXIT_SUCCESS;
}