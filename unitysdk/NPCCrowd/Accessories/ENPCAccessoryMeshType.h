#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int ENPCAccessoryMeshType_TypeDefinitionIndex = 51360;

	enum class ENPCAccessoryMeshType : ::System::Int32
	{
		Bone = 2,
		None = 0,
		Static = 1,
	};
}
