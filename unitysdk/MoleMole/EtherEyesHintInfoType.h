#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesHintInfoType_TypeDefinitionIndex = 78115;

	enum class EtherEyesHintInfoType : ::System::Int32
	{
		Empty = 0,
		Fix = 6,
		FixFocus = 7,
		FixHoldInteract = 8,
		BreakCoreFocus = 1,
		None = -1,
		FindFocus = 3,
		FindInteractFinish = 5,
		FindHoldInteract = 4,
		ShowFocus = 2,
		FixInteractFinish = 9,
	};
}
