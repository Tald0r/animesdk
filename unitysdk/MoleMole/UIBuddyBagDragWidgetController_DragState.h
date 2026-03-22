#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyBagDragWidgetController_DragState_TypeDefinitionIndex = 72074;

	enum class UIBuddyBagDragWidgetController_DragState : ::System::Int32
	{
		None = 0,
		Draging_Item = 2,
		StartDrag = 1,
		Draging_Component = 3,
		DragEnd = 4,
	};
}
