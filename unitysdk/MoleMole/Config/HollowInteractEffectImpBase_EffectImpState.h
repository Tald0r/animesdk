#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowInteractEffectImpBase_EffectImpState_TypeDefinitionIndex = 52486;

	enum class HollowInteractEffectImpBase_EffectImpState : ::System::Int32
	{
		None = 0,
		Finish = 2,
		Executing = 1,
	};
}
