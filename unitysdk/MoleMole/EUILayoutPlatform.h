#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EUILayoutPlatform_TypeDefinitionIndex = 50762;

	enum class EUILayoutPlatform : ::System::Int32
	{
		MobileConsole = 4,
		None = 0,
		PC = 2,
		Mobile = 1,
		Console = 3,
	};
}
