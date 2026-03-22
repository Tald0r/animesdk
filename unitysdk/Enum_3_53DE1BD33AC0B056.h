#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_53DE1BD33AC0B056_TypeDefinitionIndex = 48139;

enum class Enum_3_53DE1BD33AC0B056 : ::System::UInt32
{
	Init = 0x1,
	RunFail = 0x400,
	FadeOut = 0x8,
	None = 0x0,
	Pause = 0x2000,
	Killed = 0x4000,
	Invalid = 0xCC00,
	Resume = 0x10,
	Running = 0x20,
	Active = 0x7C,
	Reach = 0x40,
	Inactive = 0xFC00,
	Pending = 0x2,
	Interrupt = 0x1000,
	Finish = 0x800,
	Died = 0x8000,
	FadeIn = 0x4,
};
