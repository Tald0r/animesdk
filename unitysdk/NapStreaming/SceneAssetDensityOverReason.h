#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityOverReason_TypeDefinitionIndex = 44472;

	enum class SceneAssetDensityOverReason : ::System::Int32
	{
		RENDERER = 128,
		PARTICLE = 16,
		NONE = 0,
		SKINNED_MESH = 64,
		MATERIAL = 4,
		ANIMATION_CLIP = 32,
		OBJECT = 256,
		VERTEX = 8,
		TEXTURE_BITS = 1,
		LIGHT = 512,
		TEXTURE = 2,
	};
}
