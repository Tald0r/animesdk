#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESwitchType_TypeDefinitionIndex = 12423;

	enum class ESwitchType : ::System::UInt32
	{
		GroceryShop = 0xC,
		SettingLang = 0x1A,
		Mail = 0x10,
		WorkShop = 0xD,
		Archive = 0x16,
		Hollow = 0x6,
		SettingVoice = 0x19,
		SettingInput = 0x18,
		Login = 0x3,
		InterKnot = 0xE,
		BattleSetting = 0x14,
		Ramen = 0xA,
		EquipShop = 0x5,
		Equip = 0x1,
		StoryModeSwitch = 0x9,
		SettingPicture = 0x17,
		BattleInfo = 0x15,
		QTEManualModeSwitch = 0xF,
		DebugPay = 0x12,
		EquipDecompose = 0x4,
		SettingUser = 0x1B,
		Empty = 0x0,
		HollowPause = 0x8,
		EquipGacha = 0x2,
		VHSStore = 0x13,
		Navigation = 0x7,
		Setting = 0x11,
		HollowItem = 0xB,
	};
}
