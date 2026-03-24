#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_59ECDDAF26C61FF5_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalGuideWidgetController_HadalTabData; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA9B1C80)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA9B1D20)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA9B1B30)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA9B1BD0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHHADALINFO_OFFSET UNITYSDK_OFFSET(0xA9B26C0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHHADALSELECTINFO_OFFSET UNITYSDK_OFFSET(0xA9B3A40)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xA9B25A0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHMEMORYBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xA9B3350)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHMEMORYBATTLESELECTINFO_OFFSET UNITYSDK_OFFSET(0xA9B3DF0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA9B23F0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETBTNINTERACT_OFFSET UNITYSDK_OFFSET(0xA9B2630)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETTABDATA_OFFSET UNITYSDK_OFFSET(0xA9B1E00)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETTIMER_OFFSET UNITYSDK_OFFSET(0xA9B2380)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B4320)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA9B4350)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA9B43C0)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA9B4440)
#define MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA9B44A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalTabRowWidgetController_TypeDefinitionIndex = 69018;

	class UIHadalTabRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_59ECDDAF26C61FF5_1* _view; // 0x2A0
		::Class_1_D375C91CCE5D3999* _activityData; // 0x2A8
		::MoleMole::UIHadalGuideWidgetController_HadalTabData* _tabData; // 0x2B0
		::UnityEngine::UI::Extension::UITimeWidget* _timer; // 0x2B8
		::System::Boolean _isSelect; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTabData(::MoleMole::UIHadalGuideWidgetController_HadalTabData* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalGuideWidgetController_HadalTabData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETTABDATA_OFFSET))(this, tabData);
		}

		::System::Void SetTimer(::UnityEngine::UI::Extension::UITimeWidget* timeWidget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETTIMER_OFFSET))(this, timeWidget);
		}

		::System::Void RefreshView(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isSelect);
		}

		::System::Void SetBtnInteract(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_SETBTNINTERACT_OFFSET))(this, interact);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void RefreshHadalInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHHADALINFO_OFFSET))(this);
		}

		::System::Void RefreshHadalSelectInfo(::System::Boolean isDynamicOpen, ::System::Int32 dynamicZoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHHADALSELECTINFO_OFFSET))(this, isDynamicOpen, dynamicZoneID);
		}

		::System::Void RefreshMemoryBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHMEMORYBATTLEINFO_OFFSET))(this);
		}

		::System::Void RefreshMemoryBattleSelectInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER_REFRESHMEMORYBATTLESELECTINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALTABROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
