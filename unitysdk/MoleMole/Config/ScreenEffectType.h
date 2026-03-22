#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectType_TypeDefinitionIndex = 72078;

	enum class ScreenEffectType : ::System::Int32
	{
		MonsterIgnisFatuus = 22,
		LensDirt = 18,
		ColorLookup = 24,
		OldCRT = 15,
		DirectionalBlur = 20,
		CharacterColorCorrection = 12,
		NapBloom = 13,
		GaussianBlur = 4,
		LensDistortion = 10,
		FXColorCorrection = 8,
		Vignette = 2,
		ChromaticAberration = 11,
		ColorAdjustments = 7,
		UnsharpMask = 23,
		Unknown = 0,
		FilmGrain = 9,
		ScreenEffects = 6,
		Glitch = 1,
		RadialBlur = 3,
		Distortion = 16,
		VREffects = 17,
		FXFog = 14,
		CharacterIgnisFatuus = 21,
		DepthOfField = 5,
		MotionBlur = 19,
	};
}
