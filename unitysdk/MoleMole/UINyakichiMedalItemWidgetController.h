#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_86FD0075D1E5CD44;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA35A00)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xCA35B80)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONPLAYGETREWARDANI_OFFSET UNITYSDK_OFFSET(0xCA36B10)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xCA35C80)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA35AA0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA356E0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCA35950)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xCA36820)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xCA35E00)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA36D70)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__ONPLAYGETREWARDANI_B__8_0_OFFSET UNITYSDK_OFFSET(0xCA36E50)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xCA36DC0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA36F80)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xCA36FF0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xCA37060)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA370E0)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA37160)
#define MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCA371C0)

namespace MoleMole
{
	inline static constexpr unsigned int UINyakichiMedalItemWidgetController_TypeDefinitionIndex = 52342;

	class UINyakichiMedalItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_86FD0075D1E5CD44* _view; // 0x2D0
		::System::Int32 questID; // 0x2D8
		::MoleMole::UIGeneralPopUpHintWidgetController* hint; // 0x2E0
		::System::String* GetRewardFadein; // 0x2E8
		::System::String* GetRewardFadeout; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void OnPlayGetRewardAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_ONPLAYGETREWARDANI_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, arg);
		}

		::System::Void _OnPlayGetRewardAni_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER__ONPLAYGETREWARDANI_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIMEDALITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
