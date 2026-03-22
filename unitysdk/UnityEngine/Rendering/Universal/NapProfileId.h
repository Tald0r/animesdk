#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapProfileId_TypeDefinitionIndex = 28677;

	enum class NapProfileId : ::System::Int32
	{
		RadialBlur = 0,
		NapBloom = 1,
		OutlineEffect = 2,
		NapSecondaryBloom = 3,
		DistortionBlit = 4,
		PartialBlur = 5,
		ComicDot = 6,
		VREffects = 7,
		UnsharpMask = 8,
		UberPost = 9,
		MKGlow = 10,
		CharacterGhost = 11,
		CharacterIgnisFatuus = 12,
		PostProcessPass_RenderFinalPass = 13,
		PostProcessPass_Render = 14,
	};
}
