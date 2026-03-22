#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAnimatorStateType_TypeDefinitionIndex = 46044;

	enum class CharacterAnimatorStateType : ::System::Int32
	{
		Ground = 0,
		Sky = 1,
		Floor = 2,
		Max = 3,
	};
}
