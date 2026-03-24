#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_6BA62FD8CBCEC414_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_OUTLINEANIM_OFFSET UNITYSDK_OFFSET(0xAD87180)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_POINTANIM_OFFSET UNITYSDK_OFFSET(0xAD87150)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAD87140)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAD872D0)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAD87400)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAD87370)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAD871B0)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAD87220)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_REFRESHCURBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0xAD87740)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_REFRESHCURCHARGEPOINT_OFFSET UNITYSDK_OFFSET(0xAD874A0)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAD879E0)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAD879F0)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAD87A60)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAD87A70)
#define MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAD87A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelVivianChildWindowController_TypeDefinitionIndex = 79584;

	class UIInLevelVivianChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* POINT_FADE_IN_CLIP; // 0x0
		// static const ::System::String* POINT_FADE_OUT_CLIP; // 0x0
		// static const ::System::String* OUTLINE_FADE_IN_CLIP; // 0x0
		// static const ::System::String* OUTLINE_FADE_OUT_CLIP; // 0x0
		::Class_2_6BA62FD8CBCEC414_1* _view; // 0x2F8
		::System::Int32 chargeIndex; // 0x300
		::System::Int32 _refreshCurChargePointCached; // 0x304
		::System::Int32 _refreshCurBuffCountCached; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Animation* get_PointAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_POINTANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_OutlineAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_GET_OUTLINEANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void RefreshCurChargePoint(::System::Int32 oldChargeTimes, ::System::Int32 curChargeTimes, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_REFRESHCURCHARGEPOINT_OFFSET))(this, oldChargeTimes, curChargeTimes, ignoreAnimation);
		}

		::System::Void RefreshCurBuffCount(::System::Int32 oldBuffCount, ::System::Int32 curBuffCount, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER_REFRESHCURBUFFCOUNT_OFFSET))(this, oldBuffCount, curBuffCount, ignoreAnimation);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELVIVIANCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
