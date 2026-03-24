#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_53DE1BD33AC0B056_TypeDefinitionIndex = 38038;

enum class Enum_3_53DE1BD33AC0B056 : ::System::UInt32
{
	FadeIn = 0x4,
	FadeOut = 0x8,
	Running = 0x20,
	Init = 0x1,
	Inactive = 0xFC00,
	Active = 0x7C,
	Pending = 0x2,
	RunFail = 0x400,
	None = 0x0,
	Reach = 0x40,
	Invalid = 0xCC00,
	Died = 0x8000,
	Resume = 0x10,
	Interrupt = 0x1000,
	Killed = 0x4000,
	Pause = 0x2000,
	Finish = 0x800,
};
