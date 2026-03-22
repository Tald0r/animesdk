#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_59919CA8B8CC259B;
class Class_1_D375C91CCE5D3999;
class Class_1_EEA0111A28582B57;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_INITACTIVITYGUIDEUI_OFFSET UNITYSDK_OFFSET(0x8481870)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_INITACTIVITYTAGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x8481C10)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8481A90)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8481900)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8481B40)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x84815D0)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8481CC0)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8481CF0)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8481D50)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8481DC0)
#define MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8481E40)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityGuideUIBaseWidgetController_TypeDefinitionIndex = 72264;

	class ActivityGuideUIBaseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::UInt32 activityID; // 0x2A0
		::Class_1_D375C91CCE5D3999* activityBaseData; // 0x2A8
		::MoleMole::ActivityWidgetContext* widgetContext; // 0x2B0
		::Class_1_59919CA8B8CC259B* uiProxy; // 0x2B8
		::MoleMole::UIGeneralActivityTagInfoWidgetController* activityInfoController; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitActivityGuideUI(::Class_1_EEA0111A28582B57* uiView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_INITACTIVITYGUIDEUI_OFFSET))(this, uiView);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitActivityTagController(::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* tagGeneralInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralActivityTagInfoWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER_INITACTIVITYTAGCONTROLLER_OFFSET))(this, tagGeneralInfo);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYGUIDEUIBASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
