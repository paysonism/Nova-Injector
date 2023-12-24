#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"
#include <windows.h>

/*
 * Payson's Kernel Injector
 * Made By Payson
 * 
 * This is a simple kernel injector based off face. You can use this for a wide
 * variety of games such as fortnite, apex, etc. Feel free to use this code in 
 * any of your projects just please give me credit. If you skids use this without
 * giving me credit at all ima expose u hard. Also don't try selling this bc its
 * dtc asf on almost every anti cheat.
 */

int main()
{
	SetConsoleTitle(TEXT("Payson's Nova Injector - github.com/paysonism"));
	system("color 5");
	std::cout << "\n Payson's Free Nova Injector" << endl;
	std::cout << " discord.gg/subz - github.com/paysonism\n\n";

	std::cout << " DLL Name: 'subz.dll'\n\n";
	start_driver();
	cout << endl;

	// UnrealWindow is used to inject into fortnite (in this case nova)
	// you can find your game's window class name on google prob

	system("color 6");
	system("cls");
	std::cout << "\n Press F5 to Inject.\n";

	while (true) {
		if (GetAsyncKeyState(VK_F5) & 0x8000) { // check to see if the user has pressed f5.
			system("cls"); // clear the console
			Beep(500, 500);
			std::cout << "\n Injecting..." << std::endl; // display status text
			Sleep(1500); // wait 1.5s
			payson1337(xor_a("UnrealWindow"), xor_w(L"subz.dll")); // inject subz.dll into UnrealWindow (fortnite)
			break;
		}
	}

	cout << endl;
	system("pause");
}