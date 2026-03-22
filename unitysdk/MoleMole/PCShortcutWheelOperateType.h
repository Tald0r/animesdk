#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PCShortcutWheelOperateType_TypeDefinitionIndex = 69426;

	enum class PCShortcutWheelOperateType : ::System::Int32
	{
		ClickTrigger = 1,
		ReleaseTrigger = 2,
		None = 0,
	};
}
