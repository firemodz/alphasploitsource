#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRICATE
#include <string>
#include <string.h>
#include <windows.h>
#include <vector>
#include <TLHelp32.h>
#include <iostream>
using namespace std;
int credits() {
	// [>>>] Credits: FireModz / https://youtube.com/firemodz
	char creditsvar[] = "FireModz / https://youtube.com/firemodz";
	return 0;
}
int aslr(DWORD addr) {
	DWORD dynamicbase = (DWORD)GetModuleHandle(L"RobloxPlayerBeta.exe");
	DWORD newaddress = (addr - 0x400000 + dynamicbase);
	return newaddress;
}
#define ASLR(Addy) (Addy - 0x400000 + (DWORD)GetModuleHandleA("RobloxPlayerBeta.exe")) // aslr bypass
int main() {
	DWORD asdmemes;
	VirtualProtect((PVOID)&FreeConsole, 1, PAGE_EXECUTE_READWRITE, &asdmemes);
	*(BYTE*)(&FreeConsole) = 0xC3;
	VirtualProtect((PVOID)&FreeConsole, 1, asdmemes, &asdmemes);
	AllocConsole();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC);
	SetConsoleTitleA("Alphasploit @ v1.0.0 @ Release");
	freopen("CONOUT$", "w", stdout);
	freopen("CONIN$", "r", stdin);
	HWND ConsoleHandle = GetConsoleWindow();
	::SetWindowPos(ConsoleHandle, HWND_TOP, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
	::ShowWindow(ConsoleHandle, SW_NORMAL)
		;
	DWORD rblxbase = (DWORD)GetModuleHandle(L"RobloxPlayerBeta");
	// Scanning part
	cout << "Scanning... May crash if isnt up to update." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD);
	cout << "Wait" << endl;
	Sleep(5000);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x9);
	cout << "Done scanning!" << endl;
	cout << "You are currently running v1.0.0 Version." << endl;
	cout << "Welcome to Alphasploit!" << endl;
	cout << "Discord: https://discord.gg/GHa3PYv0" << endl;
	cout << "Credits:" << endl;
	cout << "FireModz @ https://youtube.com/firemodz" << endl;
	cout << "Marcus PlayX @ https://www.youtube.com/channel/UCfSi4tGAhUrUIhIocwmO7UA" << endl;
	cout << "Write 'cmds' for a list of commands!" << endl;
	while (true) {
		std::string cmdtext;
		std::getline(std::cin, cmdtext);
	}
	return 0;
}

namespace RBLX {
	DWORD Workspace;
	DWORD DataModel;
	DWORD Lighting;
	DWORD Players;
	DWORD Camera;
	DWORD Head;
	DWORD State;
}
BOOL __stdcall DllMain(HINSTANCE Dll, DWORD Reason, LPVOID Reserved) {
	if (Reason == DLL_PROCESS_ATTACH) {
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)main, 0, 0, 0);
	}
	return TRUE;
}
