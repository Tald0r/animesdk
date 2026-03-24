#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeType_TypeDefinitionIndex = 41645;

	enum class ENodeType : ::System::Int32
	{
		HoldRelease = 5,
		Dodge = 1,
		Hold = 2,
		Tap = 0,
		HoldSegment = 6,
		Touch = 3,
		HoldPress = 4,
	};
}
