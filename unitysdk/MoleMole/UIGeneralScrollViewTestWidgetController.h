#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_8506D464D89CF597;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralScrollViewTestWidgetController_Data; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x8C47640)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C47C90)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C47D30)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C473B0)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_SETAFTERHIDECALLBACK_OFFSET UNITYSDK_OFFSET(0x8C47E10)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C47E80)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x8C47F30)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C47F60)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C47FD0)
#define MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C48050)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralScrollViewTestWidgetController_TypeDefinitionIndex = 47767;

	class UIGeneralScrollViewTestWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8506D464D89CF597* _view; // 0x2A0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::UIGeneralScrollViewTestWidgetController_Data*>*>* _datas; // 0x2A8
		::System::Action* _afterHideCallback; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_INITSCROLLVIEW_OFFSET))(this);
		}

		::System::Void SetAfterHideCallback(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER_SETAFTERHIDECALLBACK_OFFSET))(this, action);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSCROLLVIEWTESTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
