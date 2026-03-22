#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_610CEADF7C44C275_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD1C97B0)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xD1C99E0)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1C9850)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1C9550)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD1C9700)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD1C9930)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1C9C60)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD1C9C90)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1C9D00)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1C9D80)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD1C9DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAetherXWeaponWidgetController_TypeDefinitionIndex = 79181;

	class UIActivityAetherXWeaponWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_610CEADF7C44C275_1* _view; // 0x2A0
		::System::Int32 _itemID; // 0x2A8
		::System::Int32 _index; // 0x2AC
		::System::Action_1<::System::Int32>* OnSelect; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 index, ::System::Int32 takenIndex, ::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, index, takenIndex, itemID);
		}

		::System::Void OnItemSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
