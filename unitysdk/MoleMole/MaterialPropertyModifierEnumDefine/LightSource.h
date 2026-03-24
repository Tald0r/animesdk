#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int LightSource_TypeDefinitionIndex = 68368;

	enum class LightSource : ::System::Byte
	{
		Point = 0x2,
		MainLight = 0x0,
		CameraView = 0x1,
	};
}
