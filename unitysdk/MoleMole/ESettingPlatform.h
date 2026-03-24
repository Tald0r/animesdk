#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ESettingPlatform_TypeDefinitionIndex = 62018;

	enum class ESettingPlatform : ::System::Int32
	{
		None = 0,
		Android = 3,
		Demara = 6,
		Kid = 5,
		ALL = 999,
		PC = 1,
		IOS = 2,
		PS5 = 4,
	};
}
