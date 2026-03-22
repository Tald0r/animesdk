#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ArcanaType_TypeDefinitionIndex = 50313;

	enum class ArcanaType : ::System::Int32
	{
		BeatBack = 3,
		FireBall = 2,
		FieldRange = 4,
		Shield = 1,
	};
}
