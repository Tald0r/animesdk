#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESwitchType_TypeDefinitionIndex = 15573;

	enum class ESwitchType : ::System::UInt32
	{
		Setting = 0x11,
		StoryModeSwitch = 0x9,
		QTEManualModeSwitch = 0xF,
		Equip = 0x1,
		VHSStore = 0x13,
		SettingVoice = 0x19,
		DebugPay = 0x12,
		InterKnot = 0xE,
		SettingPicture = 0x17,
		Mail = 0x10,
		BattleSetting = 0x14,
		GroceryShop = 0xC,
		HollowPause = 0x8,
		HollowItem = 0xB,
		Archive = 0x16,
		BattleInfo = 0x15,
		Empty = 0x0,
		Login = 0x3,
		Navigation = 0x7,
		EquipGacha = 0x2,
		Ramen = 0xA,
		SettingLang = 0x1A,
		Hollow = 0x6,
		SettingInput = 0x18,
		WorkShop = 0xD,
		EquipShop = 0x5,
		SettingUser = 0x1B,
		EquipDecompose = 0x4,
	};
}
