#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int ENPCAccessoryMeshType_TypeDefinitionIndex = 60768;

	enum class ENPCAccessoryMeshType : ::System::Int32
	{
		None = 0,
		Static = 1,
		Bone = 2,
	};
}
