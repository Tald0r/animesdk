#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectType_TypeDefinitionIndex = 51727;

	enum class ScreenEffectType : ::System::Int32
	{
		LensDirt = 18,
		FXFog = 14,
		LensDistortion = 10,
		NapBloom = 13,
		ColorAdjustments = 7,
		Distortion = 16,
		DirectionalBlur = 20,
		DepthOfField = 5,
		FXColorCorrection = 8,
		UnsharpMask = 23,
		FilmGrain = 9,
		Unknown = 0,
		GaussianBlur = 4,
		FXComicDot = 25,
		Vignette = 2,
		Glitch = 1,
		OldCRT = 15,
		CharacterIgnisFatuus = 21,
		MotionBlur = 19,
		RadialBlur = 3,
		ChromaticAberration = 11,
		VREffects = 17,
		ColorLookup = 24,
		MonsterIgnisFatuus = 22,
		ScreenEffects = 6,
		CharacterColorCorrection = 12,
	};
}
