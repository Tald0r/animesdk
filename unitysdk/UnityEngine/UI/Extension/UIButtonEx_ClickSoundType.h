#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_ClickSoundType_TypeDefinitionIndex = 53641;

	enum class UIButtonEx_ClickSoundType : ::System::Int32
	{
		Default = 0,
		Negative = 2,
		Tab = 1,
		Mute = -1,
	};
}
