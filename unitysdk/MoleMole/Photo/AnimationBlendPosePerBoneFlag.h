#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneFlag_TypeDefinitionIndex = 68638;

	enum class AnimationBlendPosePerBoneFlag : ::System::Byte
	{
		MeshSpaceRotation = 0x1,
		MeshSpaceScale = 0x2,
		None = 0x0,
	};
}
