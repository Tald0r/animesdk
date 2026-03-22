#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_FadeFlag_TypeDefinitionIndex = 37239;

	enum class UIBaseController_FadeFlag : ::System::Int32
	{
		Close = 2,
		Other = 4,
		FadeOut = 3,
		Start = 1,
		FadeIn = 5,
		None = 0,
	};
}
