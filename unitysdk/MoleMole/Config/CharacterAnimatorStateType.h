#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAnimatorStateType_TypeDefinitionIndex = 73912;

	enum class CharacterAnimatorStateType : ::System::Int32
	{
		Max = 3,
		Floor = 2,
		Ground = 0,
		Sky = 1,
	};
}
