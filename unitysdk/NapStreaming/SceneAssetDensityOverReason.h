#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityOverReason_TypeDefinitionIndex = 80376;

	enum class SceneAssetDensityOverReason : ::System::Int32
	{
		OBJECT = 256,
		LIGHT = 512,
		NONE = 0,
		SKINNED_MESH = 64,
		RENDERER = 128,
		TEXTURE = 2,
		MATERIAL = 4,
		ANIMATION_CLIP = 32,
		VERTEX = 8,
		TEXTURE_BITS = 1,
		PARTICLE = 16,
	};
}
