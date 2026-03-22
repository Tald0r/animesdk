#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_C2DB0C2A375CF310_TypeDefinitionIndex = 47747;

enum class Enum_3_C2DB0C2A375CF310 : ::System::Byte
{
	TransitionStart = 0x4,
	CmdApplied = 0x0,
	Pushed = 0x1,
	TransitionEnd = 0x5,
	LayerReleased = 0x8,
	Popped = 0x2,
	ReplacedTop = 0x3,
	TopChanged = 0x7,
	HardSwitch = 0x6,
};
