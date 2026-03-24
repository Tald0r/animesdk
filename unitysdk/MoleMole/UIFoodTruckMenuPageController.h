#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIFoodTruckMenuPageController_EOrderType.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_1CC0E2699D5FB1A6_3;
class Class_2_1CC0E2699D5FB1A6_3_Class_2_EE8E92A941149506_1;
class Class_2_208CC9941471731A_847;
class Class_3_32287D2997141DD8_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFoodTruckMenuPageController_Order; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xAD126E0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAD12120)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCLOSECLICK_OFFSET UNITYSDK_OFFSET(0xAD13B50)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAD12220)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONOKBTNCLICK_LOGIC_OFFSET UNITYSDK_OFFSET(0xAD13D60)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xAD13CF0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xAD13A90)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAD13870)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAD12650)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAD122C0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAD12860)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_REFRESHORDER_OFFSET UNITYSDK_OFFSET(0xAD12FA0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xAD12130)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAD13A00)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAD14A90)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAD14BD0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAD14C40)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAD14C50)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAD14C60)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAD14C70)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xAD14C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckMenuPageController_TypeDefinitionIndex = 40939;

	class UIFoodTruckMenuPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::Int32 HAPPY_ACTION = 0x7335D; // 0x0
		// static const ::System::Int32 SAD_ACTION = 0x7335E; // 0x0
		::MoleMole::UIFoodTruckMenuPageController_EOrderType OrderType; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIFoodTruckMenuPageController_Order*>* _orders; // 0x310
		::System::Int32 _currentIndex; // 0x318
		::System::Action_1<::System::Boolean>* _onClose; // 0x320
		::Class_2_1CC0E2699D5FB1A6_3* _view; // 0x328
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_847*>* _dishList; // 0x330
		::System::Collections::Generic::List_1<::Class_2_1CC0E2699D5FB1A6_3_Class_2_EE8E92A941149506_1*>* _tagWidgetList; // 0x338
		::System::Int32 CurrentSelectIndex; // 0x340
		::System::Boolean Erroring; // 0x344
		::Class_3_32287D2997141DD8_1* _log; // 0x348
		::System::Boolean _success; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_D375C91CCE5D3999* GetActivityData()
		{
			return ((::Class_1_D375C91CCE5D3999*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GETACTIVITYDATA_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnSelect(::System::Int32 dishIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONSELECT_OFFSET))(this, dishIndex);
		}

		::System::Void OnCloseClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCLOSECLICK_OFFSET))(this);
		}

		::System::Void OnOkBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnOkBtnClick_Logic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONOKBTNCLICK_LOGIC_OFFSET))(this);
		}

		::System::Void RefreshOrder(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_REFRESHORDER_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
