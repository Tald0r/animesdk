#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PerObjectShadowCullResult_TypeDefinitionIndex = 28156;

enum class PerObjectShadowCullResult : ::System::UInt32
{
	Uninitialized = 0x0,
	Success = 0x1,
	EntityInvalid = 0x2,
	EntityIsSimpleModel = 0x3,
	EntityOutOfMaxDistance = 0x4,
	EntityPerObjectShadowOff = 0x5,
	EntityIsNotActive = 0x6,
	EntityCBufferIsNull = 0x7,
	RenderersInvisible = 0x8,
	OutOfFrustum = 0x9,
	OutOfMaxCount = 0xA,
	OutOfAtlas = 0xB,
};
