#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8F3BE532744338E2.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_DF1AF84C24D8648D;
class Class_2_1A8A1E31747C749E;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace MoleMole { class UIBabeltowerTrickTechRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETBINDMODULES_OFFSET UNITYSDK_OFFSET(0x8AC5DB0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET UNITYSDK_OFFSET(0x8AC5F00)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8AC41E0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8AC4280)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8AC59F0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHTRICKTYPE_OFFSET UNITYSDK_OFFSET(0x8AC5AD0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8AC43E0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC63A0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x8AC64A0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__REFRESHVIEW_B__10_1_OFFSET UNITYSDK_OFFSET(0x8AC6550)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8AC6600)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8AC6670)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8AC66E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseWidgetController_TypeDefinitionIndex = 52682;

	class UIActivityTrickPauseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1A8A1E31747C749E* _view; // 0x2A0
		::Class_1_DF1AF84C24D8648D* scoreData; // 0x2A8
		::System::Int32 questid; // 0x2B0
		::Enum_3_8F3BE532744338E2 trickType; // 0x2B4
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* _scoreList; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickTechRowWidgetController*>* _teachList; // 0x2C0
		::MonoUITableScrollV2* BindScrollView; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshTrickType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHTRICKTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* GetBindModules()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETBINDMODULES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetNestedListDelegateGoList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET))(this);
		}

		::System::Void _RefreshView_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__REFRESHVIEW_B__10_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__REFRESHVIEW_B__10_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
