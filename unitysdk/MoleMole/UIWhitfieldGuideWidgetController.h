#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_8B36B2DB492DBF9B_11;
class Class_2_8DE4455BA0C8D634;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0xAE9DD70)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAE9DE20)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAE9DCA0)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAE9DEC0)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAE9DA40)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAE9DFA0)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xAE9DFD0)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAE9DFE0)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAE9E050)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAE9E0C0)
#define MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAE9E140)

namespace MoleMole
{
	inline static constexpr unsigned int UIWhitfieldGuideWidgetController_TypeDefinitionIndex = 62161;

	class UIWhitfieldGuideWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_8B36B2DB492DBF9B_11* _view; // 0x2A0
		::System::Collections::Generic::List_1<::Class_2_8DE4455BA0C8D634*>* _tabDataList; // 0x2A8
		::Class_1_D375C91CCE5D3999* rootActivityData; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_INITDATA_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWHITFIELDGUIDEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
