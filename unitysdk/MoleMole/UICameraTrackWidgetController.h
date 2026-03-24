#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B3C7399450DA03D5;
class Class_2_E4E0EC1B1950CE94_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_GETVISIBILITYANDPOS_OFFSET UNITYSDK_OFFSET(0xD0F4F90)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONAFTERCAMERALATEUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xD0F4E80)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD0F4D00)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD0F4A70)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD0F4470)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD0F4DA0)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD0F4320)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD0F43C0)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_REFRESHVISIBILITY_OFFSET UNITYSDK_OFFSET(0xD0F5500)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_SETPHOTODATATRACKTIP_OFFSET UNITYSDK_OFFSET(0xD0F55A0)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_TICKPOSITION_OFFSET UNITYSDK_OFFSET(0xD0F52A0)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xD0F4710)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0F56F0)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD0F5720)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD0F5790)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD0F57F0)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD0F5860)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD0F58E0)
#define MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD0F5940)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraTrackWidgetController_TypeDefinitionIndex = 62908;

	class UICameraTrackWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E4E0EC1B1950CE94_2* _view; // 0x2A0
		::Class_2_B3C7399450DA03D5* _photoDataTrackTip; // 0x2A8
		::UnityEngine::RectTransform* _rootParent; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnAfterCameraLateUpdateNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_ONAFTERCAMERALATEUPDATENOTIFY_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_TICK_OFFSET))(this);
		}

		::System::Void TickPosition(::UnityEngine::Vector3 screenPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_TICKPOSITION_OFFSET))(this, screenPos);
		}

		::System::Boolean GetVisibilityAndPos(::UnityEngine::Vector3& worldPos, ::UnityEngine::Vector3& screenPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_GETVISIBILITYANDPOS_OFFSET))(this, worldPos, screenPos);
		}

		::System::Void RefreshVisibility(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_REFRESHVISIBILITY_OFFSET))(this, isVisible);
		}

		::System::Void SetPhotoDataTrackTip(::Class_2_B3C7399450DA03D5* photoDataTrackTip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B3C7399450DA03D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER_SETPHOTODATATRACKTIP_OFFSET))(this, photoDataTrackTip);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERATRACKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
