#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_FadeInMode_TypeDefinitionIndex = 58897;

	enum class UIGalgamePageController_FadeInMode : ::System::Byte
	{
		BlackMask = 0x1,
		SpecialBlackMask = 0x3,
		GalConnectGal = 0x4,
		Normal = 0x0,
		SwitchScene = 0x2,
	};
}
