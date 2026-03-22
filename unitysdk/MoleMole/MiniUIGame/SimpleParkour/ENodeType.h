#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeType_TypeDefinitionIndex = 43684;

	enum class ENodeType : ::System::Int32
	{
		Tap = 0,
		Dodge = 1,
		HoldSegment = 6,
		HoldPress = 4,
		Hold = 2,
		Touch = 3,
		HoldRelease = 5,
	};
}
