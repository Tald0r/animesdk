#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowLayoutPlatform_TypeDefinitionIndex = 41792;

	enum class HollowLayoutPlatform : ::System::Int32
	{
		Console = 3,
		PC = 2,
		None = 0,
		VirtualStick = 5,
		Mobile = 1,
		MobileConsole = 4,
	};
}
