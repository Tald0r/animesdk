#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileType_TypeDefinitionIndex = 69989;

	enum class GraphicSettingProfileType : ::System::Int32
	{
		GlobalIllumination = 21,
		VolumetricCloud = 13,
		FrameRate = 2,
		MotionBlur = 15,
		RenderScale = 4,
		ShadingQuality = 17,
		ShadowQuality = 5,
		DpiFactor = 11,
		AnisotropicSampling = 23,
		ModelQuality = 12,
		SceneQuality = 18,
		AutoExposure = 20,
		SceneGlare = 19,
		LoopSubdivision = 22,
		Distortion = 16,
		VSync = 3,
		VolumetricFog = 7,
		Bloom = 8,
		ParticleQuality = 10,
		AntiAlias = 6,
		MirrorReflection = 9,
		None = 0,
		DepthOfField = 14,
	};
}
