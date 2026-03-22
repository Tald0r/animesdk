#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_69CBB7FF0BE6A673_3;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowProgressCircleRowWidgetController; }

#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0xBFF55E0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_MAINICONANIM_OFFSET UNITYSDK_OFFSET(0xBFF6AB0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFF5540)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFF7410)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFF53F0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFF5490)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0xBFF61D0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PROGRESSBARANIM_OFFSET UNITYSDK_OFFSET(0xBFF62B0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_SETPROGRESSIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xBFF7080)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFF7520)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFF7550)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFF75C0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFF7640)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFF76A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPhaseProgressWidgetController_TypeDefinitionIndex = 51539;

	class UIGeneralPhaseProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69CBB7FF0BE6A673_3* _view; // 0x2A0
		::DG::Tweening::Tween* _barHandler; // 0x2A8
		::DG::Tweening::Tween* _iconHandler; // 0x2B0
		::MoleMole::UIHollowProgressCircleRowWidgetController* _mainIconCircleCtrl; // 0x2B8
		::UnityEngine::Vector3 _mainIconStartPos; // 0x2C0
		::UnityEngine::Vector3 _mainIconTarPos; // 0x2CC
		::System::Single _tarProgressBarRectPosX; // 0x2D8
		::System::Boolean showMainIcon; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitProgressView(::System::Int32 lastLayer, ::System::Int32 currentLayer, ::System::Int32 maxLayer, ::System::Boolean showMainIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET))(this, lastLayer, currentLayer, maxLayer, showMainIcon);
		}

		::System::Void PlayProgressAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET))(this);
		}

		::System::Void SetProgressImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_SETPROGRESSIMMEDIATELY_OFFSET))(this);
		}

		::System::Void ProgressBarAnim(::System::Single tar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PROGRESSBARANIM_OFFSET))(this, tar);
		}

		::System::Void MainIconAnim(::MoleMole::UIHollowProgressCircleRowWidgetController* mainIconCircle, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 tar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowProgressCircleRowWidgetController*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_MAINICONANIM_OFFSET))(this, mainIconCircle, start, tar);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
