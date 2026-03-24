#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_ClickSoundType_TypeDefinitionIndex = 41731;

	enum class UIButtonEx_ClickSoundType : ::System::Int32
	{
		Default = 0,
		Tab = 1,
		Negative = 2,
		Mute = -1,
	};
}
