#include <Windows.h> // Has DWORD Function
#define ASLR(Addy) (Addy - 0x400000 + (DWORD)GetModuleHandleA("RobloxPlayerBeta.exe")); // Bypass easy
const int ADDRESSNAMEGOESHERE_Addr = ASLR(0x);
#define ADDRESSNAMEGOESHERE DWORD = 0xADDRESSGOESHERE; // Address
