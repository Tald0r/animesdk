#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileType_TypeDefinitionIndex = 45575;

	enum class GraphicSettingProfileType : ::System::Int32
	{
		VolumetricCloud = 13,
		None = 0,
		SceneQuality = 18,
		DpiFactor = 11,
		AntiAlias = 6,
		Distortion = 16,
		RenderScale = 4,
		Bloom = 8,
		VolumetricFog = 7,
		SceneGlare = 19,
		FrameRate = 2,
		VSync = 3,
		ShadingQuality = 17,
		AnisotropicSampling = 23,
		DepthOfField = 14,
		GlobalIllumination = 21,
		MirrorReflection = 9,
		ShadowQuality = 5,
		MotionBlur = 15,
		ParticleQuality = 10,
		ModelQuality = 12,
		LoopSubdivision = 22,
		AutoExposure = 20,
	};
}
