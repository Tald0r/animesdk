#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int ELODLevel_TypeDefinitionIndex = 37842;

	enum class ELODLevel : ::System::UInt32
	{
		LOD2 = 0x2,
		LOD4 = 0x4,
		LOD1 = 0x1,
		LOD0 = 0x0,
		LOD3 = 0x3,
		Undefined = 0x7,
		EnumSize = 0x5,
	};
}
