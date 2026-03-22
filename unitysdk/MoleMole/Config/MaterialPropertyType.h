#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int MaterialPropertyType_TypeDefinitionIndex = 38509;

	enum class MaterialPropertyType : ::System::Int32
	{
		VertexStretch = 6,
		SecondaryEmission = 3,
		Unknown = -1,
		AbnormalPropertyBurn = 21,
		Override2Tone = 5,
		Other = 19,
		Fresnel = 12,
		MainMaps = 10,
		RimGlow = 17,
		OverrideRimGlow = 13,
		Override = 2,
		Transition = 0,
		GhostMask = 23,
		WeaponBallMainMaps = 25,
		SpecialWeaponEmission = 26,
		AbnormalPropertyFreeze = 22,
		OverrideOutline = 9,
		AbnormalPropertyElectro = 20,
		Outline = 16,
		IgnisFatuusMask = 24,
		Glitch = 1,
		NoiseLerp = 27,
		Dither = 15,
		MatCap = 14,
		ClipPlane = 7,
		AbnormalProperty = 18,
		Diffuse = 11,
		ScreenImage = 4,
	};
}
