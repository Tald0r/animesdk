#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneFlag_TypeDefinitionIndex = 52536;

	enum class AnimationBlendPosePerBoneFlag : ::System::Byte
	{
		None = 0x0,
		MeshSpaceScale = 0x2,
		MeshSpaceRotation = 0x1,
	};
}
