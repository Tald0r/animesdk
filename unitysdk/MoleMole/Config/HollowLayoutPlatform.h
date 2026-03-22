#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowLayoutPlatform_TypeDefinitionIndex = 52969;

	enum class HollowLayoutPlatform : ::System::Int32
	{
		MobileConsole = 4,
		Mobile = 1,
		VirtualStick = 5,
		Console = 3,
		None = 0,
		PC = 2,
	};
}
