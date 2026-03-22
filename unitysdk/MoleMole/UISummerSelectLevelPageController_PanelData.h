#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63D476C405CEAF7E_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA_ISTABLOCK_OFFSET UNITYSDK_OFFSET(0x71DA8F0)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA_SHOWLOCKTIPS_OFFSET UNITYSDK_OFFSET(0x71DA980)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x71DAA10)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSelectLevelPageController_PanelData_TypeDefinitionIndex = 39807;

	class UISummerSelectLevelPageController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* StartButtonText; // 0x28
		::System::String* ScoreTitleText; // 0x30
		::System::String* Title; // 0x38
		::System::String* SelectEquipText; // 0x40
		::System::Int32 TabLock2; // 0x48
		::System::Boolean IsShooting; // 0x4C
		::System::Boolean IsOpenByMainPanel; // 0x4D
		::System::Int32 SelectLevelId; // 0x50
		::System::Int32 TabLock1; // 0x54
		::Enum_3_63D476C405CEAF7E_1 LevelGroupType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsTabLock(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA_ISTABLOCK_OFFSET))(this, index);
		}

		::System::Void ShowLockTips(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA_SHOWLOCKTIPS_OFFSET))(this, index);
		}
	};
}
