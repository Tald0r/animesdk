#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ETextFontBrushOption_TypeDefinitionIndex = 45778;

	enum class ETextFontBrushOption : ::System::Int32
	{
		ByConfig = 0,
		ForceOn = 1,
		ForceOff = 2,
	};
}
