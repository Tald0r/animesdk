#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_ComicUIState_TypeDefinitionIndex = 45628;

	enum class UIComicPageController_ComicUIState : ::System::Byte
	{
		TurnPage = 0x4,
		FadeIn = 0x1,
		Playing = 0x3,
		SwitchScenePlaying = 0x2,
		None = 0x0,
		FadeOut = 0x5,
	};
}
