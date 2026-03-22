#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController_UIRoleInfo_SubType_TypeDefinitionIndex = 47506;

	enum class UIRoleInfoPageController_UIRoleInfo_SubType : ::System::Int32
	{
		EQUIP = 2,
		NONE = -1,
		BASIC = 0,
		SKILL = 1,
		COUNT = 3,
	};
}
