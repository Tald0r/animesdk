#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_FadeFlag_TypeDefinitionIndex = 58435;

	enum class UIBaseController_FadeFlag : ::System::Int32
	{
		None = 0,
		Close = 2,
		FadeOut = 3,
		Start = 1,
		Other = 4,
		FadeIn = 5,
	};
}
