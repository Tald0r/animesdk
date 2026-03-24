#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PCShortcutWheelOperateType_TypeDefinitionIndex = 45959;

	enum class PCShortcutWheelOperateType : ::System::Int32
	{
		ReleaseTrigger = 2,
		ClickTrigger = 1,
		None = 0,
	};
}
