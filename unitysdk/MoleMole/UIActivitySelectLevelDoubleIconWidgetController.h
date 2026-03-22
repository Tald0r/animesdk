#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_Corner.h"

class Class_2_BA39D6ED91527A4D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA96FF0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA977D0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA96EA0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCA96F40)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0xCA97670)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETID_OFFSET UNITYSDK_OFFSET(0xCA97090)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETISPARTNERVIEW_OFFSET UNITYSDK_OFFSET(0xCA95CB0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETMAINTEXTVIEW_OFFSET UNITYSDK_OFFSET(0xCA97490)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETPARTNERTEXTVIEW_OFFSET UNITYSDK_OFFSET(0xCA972B0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA978B0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA97960)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA979D0)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA97A50)
#define MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCA97AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySelectLevelDoubleIconWidgetController_TypeDefinitionIndex = 61733;

	class UIActivitySelectLevelDoubleIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BA39D6ED91527A4D* _view; // 0x2A0
		::UnityEngine::UI::GridLayoutGroup_Corner StartCorner; // 0x2A8
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* heads; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetID(::System::Collections::Generic::List_1<::System::Int32>* ids, ::UnityEngine::UI::GridLayoutGroup_Corner StartCorner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::UI::GridLayoutGroup_Corner))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETID_OFFSET))(this, ids, StartCorner);
		}

		::System::Void SetPartnerTextView(::System::String* title, ::System::String* teamTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETPARTNERTEXTVIEW_OFFSET))(this, title, teamTag);
		}

		::System::Void SetMainTextView(::System::String* title, ::System::String* teamTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETMAINTEXTVIEW_OFFSET))(this, title, teamTag);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* click)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, click);
		}

		::System::Void SetIsPartnerView(::System::Boolean isPartner, ::System::String* title, ::System::String* teamTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_SETISPARTNERVIEW_OFFSET))(this, isPartner, title, teamTag);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTLEVELDOUBLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
