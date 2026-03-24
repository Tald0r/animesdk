#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_18;
class Class_1_D375C91CCE5D3999;
class Class_2_1FCFE0C0C73DB469;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x987F690)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x987F730)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x987FDA0)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x987F810)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_SETONBTNSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x9880060)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x98800D0)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9880100)
#define MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9880170)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishBtnWidgetController_TypeDefinitionIndex = 78160;

	class UIActivityFishBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1FCFE0C0C73DB469* _view; // 0x2A0
		::System::Action_1<::System::Boolean>* _onBtnShowState; // 0x2A8
		::Class_0_16E4307DCC419505_18* _uiConfig; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean RefreshView(::Class_1_D375C91CCE5D3999* activityBaseData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, activityBaseData);
		}

		::System::Boolean RefreshView_1(::Class_0_16E4307DCC419505_18* gachaUiConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_18*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, gachaUiConfig);
		}

		::System::Void SetOnBtnShowState(::System::Action_1<::System::Boolean>* onBtnShowState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER_SETONBTNSHOWSTATE_OFFSET))(this, onBtnShowState);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
