#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ArcanaType_TypeDefinitionIndex = 49784;

	enum class ArcanaType : ::System::Int32
	{
		Shield = 1,
		FieldRange = 4,
		BeatBack = 3,
		FireBall = 2,
	};
}
