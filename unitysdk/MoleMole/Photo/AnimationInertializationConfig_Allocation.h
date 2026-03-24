#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationInertializationConfig_Allocation_TypeDefinitionIndex = 45231;

	enum class AnimationInertializationConfig_Allocation : ::System::Int32
	{
		SnapshotsBones = 0,
		Count = 4,
		SnapshotsPoses = 1,
		Request = 3,
		BonesDiff = 2,
	};
}
