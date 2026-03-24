#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_127;
namespace MoleMole { class UIActivityHotPotCombatRowWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x8CC3870)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_GETTARGETQUESETID_OFFSET UNITYSDK_OFFSET(0x8CC4430)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8CC2D10)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8CC2E90)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8CC2DB0)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8CC2BC0)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8CC2C60)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0x8CC4720)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x8CC3460)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHLOCKINFO_OFFSET UNITYSDK_OFFSET(0x8CC42C0)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x8CC3C50)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHQUESTINFO_OFFSET UNITYSDK_OFFSET(0x8CC3DF0)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8CC2FC0)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0x8CC4890)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC4A00)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8CC4A30)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8CC4AA0)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8CC4B10)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8CC4B90)
#define MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8CC4BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotChallengeRowWidgetController_TypeDefinitionIndex = 59427;

	class UIActivityHotPotChallengeRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_127* _view; // 0x2A0
		::System::Int32 hotpotLevelID; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void RefreshInfo(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, context);
		}

		::System::Void BindButton(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_BINDBUTTON_OFFSET))(this, context);
		}

		::System::Void RefreshLock(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHLOCK_OFFSET))(this, context);
		}

		::System::Void RefreshLockInfo(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHLOCKINFO_OFFSET))(this, context);
		}

		::System::Void RefreshQuestInfo(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_REFRESHQUESTINFO_OFFSET))(this, context);
		}

		::System::Void OpenMap(::System::Int32 specialQuest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_OPENMAP_OFFSET))(this, specialQuest);
		}

		::System::Int32 GetTargetQuesetID(::System::Int32 specialQuest)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_GETTARGETQUESETID_OFFSET))(this, specialQuest);
		}

		::System::Void StartLevel(::System::Int32 levelid, ::System::Int32 generalLevelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER_STARTLEVEL_OFFSET))(this, levelid, generalLevelID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCHALLENGEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
