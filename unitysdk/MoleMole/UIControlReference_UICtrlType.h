#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIControlReference_UICtrlType_TypeDefinitionIndex = 79726;

	enum class UIControlReference_UICtrlType : ::System::Int32
	{
		WidgetController = 3,
		ScrollViewItemWidgetController = 6,
		StorePageController = 8,
		BigSceneStorePageController = 7,
		UI3DModelController = 5,
		ChildController = 2,
		CommonWidget = 4,
		PopController = 1,
		PageController = 0,
	};
}
