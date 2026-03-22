#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_7807B2B04302CD7B_13;
class Class_2_A601D11EE974378B;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0xC3ECA10)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3EC890)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC3ECA80)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC3EC930)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3EC7F0)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC3ECBA0)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0xC3ED4D0)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC3ED540)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC3ED550)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC3ED5C0)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC3ED640)
#define MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC3ED6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseTabBtnWidgetController_TypeDefinitionIndex = 64559;

	class UITowerDefenseTabBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_A601D11EE974378B* _view; // 0x2D0
		::System::Action_4<::MoleMole::UITowerDefenseTabBtnWidgetController*, ::System::Int32, ::System::Object*, ::System::Boolean>* UpdateCallback; // 0x2D8
		::System::Action_1<::Class_1_7807B2B04302CD7B_13*>* clickCallback; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::System::Int32 levelid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, levelid);
		}

		::System::Void SetClickCallback(::System::Action_1<::Class_1_7807B2B04302CD7B_13*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_7807B2B04302CD7B_13*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET))(this, action);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETABBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
