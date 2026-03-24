#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatIKType_TypeDefinitionIndex = 66663;

	enum class MainCityChatIKType : ::System::Int32
	{
		LookAtPlayer = 0,
		LookAtNpc = 1,
		LookAtMember = 3,
		LookAtSceneObject = 2,
	};
}
