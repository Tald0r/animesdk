#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneConfig_Allocation_TypeDefinitionIndex = 62131;

	enum class AnimationBlendPosePerBoneConfig_Allocation : ::System::Int32
	{
		BoneWeights = 0,
		PoseWeights = 1,
		Count = 2,
	};
}
