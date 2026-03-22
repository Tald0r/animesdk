#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitAnimDirectionType_TypeDefinitionIndex = 78408;

	enum class HitAnimDirectionType : ::System::Int32
	{
		HitDown = 1,
		HitUp = 0,
		HitRight = 3,
		HitLeft = 2,
	};
}
