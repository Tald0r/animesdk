#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EMainPageItemType_TypeDefinitionIndex = 70771;

	enum class EMainPageItemType : ::System::Int32
	{
		Buddy = 2,
		Skin = 3,
		Avatar = 1,
		Invalid = 0,
	};
}
