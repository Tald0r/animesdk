#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_ButtonType_TypeDefinitionIndex = 63114;

	enum class ConfigUICommon_Input_ButtonType : ::System::Int32
	{
		TriggerTPSAimSwitch = 1603,
		CharacterSwitch = 5,
		BangbooJump = 33,
		CharacterCommonSkill = 35,
		CityRun = 12,
		Branch = 3,
		BangbooEvade = 32,
		CityQuickFunc04 = 16,
		CityQuickFunc03 = 15,
		TriggerTPSReload = 1602,
		Evade = 2,
		CityQuickFunc01 = 13,
		BangbooAttack = 31,
		BangbooSpecialV2 = 39,
		JoyStick_Hollow = 23,
		CityInteract = 11,
		BangbooAttackV2 = 36,
		BangbooJumpV2 = 38,
		BangbooEvadeV2 = 37,
		CityQuickFunc02 = 14,
		BangbooSpecial = 34,
		TriggerTPSShot = 1601,
		Attack = 1,
		None = 0,
		Ultra = 4,
		JoyStick_InLevel = 21,
		JoyStick_MainCity = 22,
	};
}
