#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionSegment_TypeDefinitionIndex = 49562;

	enum class InteractionSegment : ::System::Int32
	{
		BeforeScroll = 8,
		EndScroll = 16,
		BeforeTwoPointDrag = 32,
		BeginDrag = 1,
		EndTwoPointDrag = 64,
		None = 0,
		Drag = 2,
		EndDrag = 4,
	};
}
