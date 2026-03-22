#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_30776A4C6D5D6FC5;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_GET_TABBUTTON_OFFSET UNITYSDK_OFFSET(0x9E90DE0)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9E90F70)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9E91010)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9E90E00)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x9E91170)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_SETINDEXANDPERIODID_OFFSET UNITYSDK_OFFSET(0x9E910F0)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x9E91560)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E91650)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x9E91680)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9E91690)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9E91700)
#define MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9E91780)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationYumTabWidgetController_TypeDefinitionIndex = 58804;

	class UIOperationYumTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_30776A4C6D5D6FC5* _view; // 0x2A0
		::System::Action_1<::System::Int32>* OnSelect; // 0x2A8
		::System::Int32 _periodID; // 0x2B0
		::System::Int32 _index; // 0x2B4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_TabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_GET_TABBUTTON_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetIndexAndPeriodID(::System::Int32 index, ::System::Int32 periodID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_SETINDEXANDPERIODID_OFFSET))(this, index, periodID);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER_SETSELECT_OFFSET))(this, isSelect);
		}

		::System::Void _OnUIInit_b__6_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
