#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesHintInfoType_TypeDefinitionIndex = 54939;

	enum class EtherEyesHintInfoType : ::System::Int32
	{
		FindInteractFinish = 5,
		FixInteractFinish = 9,
		FixHoldInteract = 8,
		ShowFocus = 2,
		Empty = 0,
		FindFocus = 3,
		None = -1,
		BreakCoreFocus = 1,
		Fix = 6,
		FindHoldInteract = 4,
		FixFocus = 7,
	};
}
