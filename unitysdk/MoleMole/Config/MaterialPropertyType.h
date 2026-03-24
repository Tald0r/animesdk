#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialPropertyType_TypeDefinitionIndex = 47534;

	enum class MaterialPropertyType : ::System::Int32
	{
		MainMaps = 10,
		ScreenImage = 4,
		Transition = 0,
		Fresnel = 12,
		SpecialWeaponEmission = 26,
		ClipPlane = 7,
		VertexStretch = 6,
		Unknown = -1,
		IgnisFatuusMask = 24,
		Glitch = 1,
		Dither = 15,
		Blush = 28,
		SecondaryEmission = 3,
		Diffuse = 11,
		AbnormalPropertyBurn = 21,
		Other = 19,
		Override = 2,
		OverrideRimGlow = 13,
		Outline = 16,
		AbnormalPropertyFreeze = 22,
		AbnormalProperty = 18,
		AbnormalPropertyElectro = 20,
		WeaponBallMainMaps = 25,
		OverrideOutline = 9,
		GhostMask = 23,
		Override2Tone = 5,
		MatCap = 14,
		RimGlow = 17,
		NoiseLerp = 27,
	};
}
