#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int OverrideRimGlowFresnelBlendMode_TypeDefinitionIndex = 62681;

	enum class OverrideRimGlowFresnelBlendMode : ::System::Byte
	{
		Blend = 0x1,
		Mul = 0x2,
		Add = 0x0,
	};
}
