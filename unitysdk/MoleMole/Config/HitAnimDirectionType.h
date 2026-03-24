#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitAnimDirectionType_TypeDefinitionIndex = 66483;

	enum class HitAnimDirectionType : ::System::Int32
	{
		HitDown = 1,
		HitRight = 3,
		HitUp = 0,
		HitLeft = 2,
	};
}
