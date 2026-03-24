#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyBagDragWidgetController_DragState_TypeDefinitionIndex = 39498;

	enum class UIBuddyBagDragWidgetController_DragState : ::System::Int32
	{
		Draging_Item = 2,
		DragEnd = 4,
		StartDrag = 1,
		None = 0,
		Draging_Component = 3,
	};
}
