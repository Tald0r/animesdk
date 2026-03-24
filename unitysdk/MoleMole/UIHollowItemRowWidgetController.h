#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_2655FBB72F5F5E2B;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_BINDCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x7F76310)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_GET_SELECTIMG_OFFSET UNITYSDK_OFFSET(0x7F75640)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7F75710)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7F757B0)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7F75670)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_REFRESHMUTE_OFFSET UNITYSDK_OFFSET(0x7F75920)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x7F75C70)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_SETBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x7F75890)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_SHOWLOCK_OFFSET UNITYSDK_OFFSET(0x7F76260)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7F76450)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7F76480)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7F764F0)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7F76570)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemRowWidgetController_TypeDefinitionIndex = 60592;

	class UIHollowItemRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_2655FBB72F5F5E2B* _view; // 0x2A0
		::System::Int32 itemid; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetBtnInteractable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_SETBTNINTERACTABLE_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_SelectImg()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_GET_SELECTIMG_OFFSET))(this);
		}

		::System::Void RefreshMute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_REFRESHMUTE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemid);
		}

		::System::Void ShowLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_SHOWLOCK_OFFSET))(this);
		}

		::System::Void BindClickCallback(::UnityEngine::UI::Extension::UITabButtonGroup* group, ::System::Int32 index, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITabButtonGroup*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER_BINDCLICKCALLBACK_OFFSET))(this, group, index, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
