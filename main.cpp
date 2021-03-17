#include "SADXModLoader.h"

extern "C" {
	__declspec(dllexport) void __cdecl Init(
		const char* path,
		const HelperFunctions& helper_functions
	) {
		WriteJump(reinterpret_cast<void*>(0x7A7AD0), reinterpret_cast<void*>(0x4FA320));
	}

	__declspec(dllexport) ModInfo SADXModInfo{ ModLoaderVer };
}
