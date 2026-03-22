#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/MoleMole/KeyboardMouseKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_MAINCITYBATTLEPASSKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x8F86F20)
#define MOLEMOLE_MAINCITYBATTLEPASSKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x8F86F30)
#define MOLEMOLE_MAINCITYBATTLEPASSKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x8F86F40)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityBattlePassKeyboardMouseBindingSettingEntry_TypeDefinitionIndex = 43042;

	class MainCityBattlePassKeyboardMouseBindingSettingEntry : public ::MoleMole::KeyboardMouseKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYBATTLEPASSKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_543B6B88E17BAFE0 get_SettingContentType()
		{
			return ((::Enum_3_543B6B88E17BAFE0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYBATTLEPASSKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYBATTLEPASSKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
