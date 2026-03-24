#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LodType_TypeDefinitionIndex = 56073;

	enum class NPCCrowdLodManager_LodType : ::System::Int32
	{
		PhotoMode = 2,
		AvatarDistance = 0,
		CameraDistance = 1,
	};
}
