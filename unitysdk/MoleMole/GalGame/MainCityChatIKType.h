#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatIKType_TypeDefinitionIndex = 44072;

	enum class MainCityChatIKType : ::System::Int32
	{
		LookAtNpc = 1,
		LookAtSceneObject = 2,
		LookAtPlayer = 0,
		LookAtMember = 3,
	};
}
