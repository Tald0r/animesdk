#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionSegment_TypeDefinitionIndex = 73934;

	enum class InteractionSegment : ::System::Int32
	{
		Drag = 2,
		EndDrag = 4,
		EndScroll = 16,
		None = 0,
		BeforeTwoPointDrag = 32,
		BeginDrag = 1,
		EndTwoPointDrag = 64,
		BeforeScroll = 8,
	};
}
