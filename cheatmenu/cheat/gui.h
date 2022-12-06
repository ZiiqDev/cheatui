#pragma once
#include <d3d9.h>

namespace gui
{
	//constant wind size
	constexpr int WIDTH = 500;
	constexpr int HEIGHT = 300;

	inline bool exit = true;
	
	//winapi window vars
	inline HWND window = nullptr;
	inline tagWNDCLASSEXA windowClass = { };

	inline POINTS position = { };
	
	//Direct x state vars
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	// handle window creation and desctruitionn
	void CreateHWindow(
		const char* windowName,
		const char* Classname) noexcept; 
	void DestroyHWindow() noexcept; 

	//handle device creation and desctruction
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept; 
	void DestroyDevice() noexcept;

	// handle ImGui creation and Desctruction 
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept; 
	
	// render funcs

	void BeginRender() noexcept;
	void EndRender() noexcept; 
	void Render() noexcept;
}