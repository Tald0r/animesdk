#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int UIPointerType_TypeDefinitionIndex = 27651;

	enum class UIPointerType : ::System::Int32
	{
		None = 0,
		MouseOrPen = 1,
		Touch = 2,
		Tracked = 3,
	};
}
