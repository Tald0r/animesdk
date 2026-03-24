#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_4C7CE452CFA7A879_TypeDefinitionIndex = 57271;

enum class Enum_3_4C7CE452CFA7A879 : ::System::UInt32
{
	NPCRotateStarted = 0x2,
	PlayerRotateStarted = 0x4,
	Active = 0x1,
	NPCRotateDone = 0x20000000,
	PlayerRotateDone = 0x80000000,
	NavDone = 0xE0000000,
	PlayerMoveDone = 0x40000000,
	None = 0x0,
};
