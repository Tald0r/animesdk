#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ESettingPlatform_TypeDefinitionIndex = 72982;

	enum class ESettingPlatform : ::System::Int32
	{
		PC = 1,
		Android = 3,
		IOS = 2,
		Kid = 5,
		Demara = 6,
		PS5 = 4,
		ALL = 999,
		None = 0,
	};
}
