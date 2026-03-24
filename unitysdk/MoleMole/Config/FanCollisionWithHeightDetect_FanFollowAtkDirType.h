#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_FanFollowAtkDirType_TypeDefinitionIndex = 80330;

	enum class FanCollisionWithHeightDetect_FanFollowAtkDirType : ::System::Int32
	{
		ReverseFollowAtk = 2,
		FollowAtk = 1,
		NormalFan = 0,
	};
}
