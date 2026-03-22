#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/MoleMole/GamepadListKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_CANBEALLUNBIND_OFFSET UNITYSDK_OFFSET(0x7F13120)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x7F13130)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x7F13140)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x7F13150)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelQTECancelGamepadBindingSettingEntry_TypeDefinitionIndex = 47705;

	class InLevelQTECancelGamepadBindingSettingEntry : public ::MoleMole::GamepadListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanBeAllUnbind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_CANBEALLUNBIND_OFFSET))(this);
		}

		::Enum_3_543B6B88E17BAFE0 get_SettingContentType()
		{
			return ((::Enum_3_543B6B88E17BAFE0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
