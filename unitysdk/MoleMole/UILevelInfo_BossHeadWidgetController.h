#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_00E0F6A4450214AA_8;
class Class_2_208CC9941471731A_65;
class Class_2_8F61B9A09E64A3EA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA646E20)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA646EC0)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA646BA0)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA646C40)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA647070)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_SETQUEST_OFFSET UNITYSDK_OFFSET(0xA646FA0)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_SHOWBOSSINFO_OFFSET UNITYSDK_OFFSET(0xA6471A0)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA647360)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA647390)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA647400)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA647480)
#define MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA6474E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelInfo_BossHeadWidgetController_TypeDefinitionIndex = 77067;

	class UILevelInfo_BossHeadWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_00E0F6A4450214AA_8* _view; // 0x2A0
		::Class_2_8F61B9A09E64A3EA* questConfig; // 0x2A8
		::Class_2_208CC9941471731A_65* activityBattleQuestConfig; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetQuest(::System::Int32 quest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_SETQUEST_OFFSET))(this, quest);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ShowBossInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER_SHOWBOSSINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFO_BOSSHEADWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
