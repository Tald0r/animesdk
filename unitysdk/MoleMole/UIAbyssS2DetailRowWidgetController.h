#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_898E23CD4E44A533_1;
class Class_1_945ACFB1FEBC7A2C;
class Class_2_809B068491AD1EEA_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ADDSUBROW_OFFSET UNITYSDK_OFFSET(0x8B960D0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x8B95EA0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8B961C0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8B96260)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8B95CE0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8B95D80)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8B96340)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8B96370)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8B963E0)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8B96460)
#define MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8B964C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2DetailRowWidgetController_TypeDefinitionIndex = 64816;

	class UIAbyssS2DetailRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_809B068491AD1EEA_11* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitView(::Class_1_898E23CD4E44A533_1* contextAbyssS2DetailRowInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_898E23CD4E44A533_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this, contextAbyssS2DetailRowInfo);
		}

		::System::Void AddSubRow(::Class_1_945ACFB1FEBC7A2C* subRow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_945ACFB1FEBC7A2C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ADDSUBROW_OFFSET))(this, subRow);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
