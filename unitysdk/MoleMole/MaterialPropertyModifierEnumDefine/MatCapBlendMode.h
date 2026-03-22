#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MatCapBlendMode_TypeDefinitionIndex = 44543;

	enum class MatCapBlendMode : ::System::Byte
	{
		Overlay = 0x2,
		Add = 0x1,
		AlphaBlended = 0x0,
	};
}
