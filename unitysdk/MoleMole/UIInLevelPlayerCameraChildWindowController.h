#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_69CBB7FF0BE6A673_15;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ADDMOUSEMOVEDELTARECORDDATA_OFFSET UNITYSDK_OFFSET(0x6898D50)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_CLEARMOUSEMOVEDELTARECORDDATA_OFFSET UNITYSDK_OFFSET(0x6898F80)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_GETTOTALMOUSEMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x6898E10)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x6896670)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x68990F0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x6896680)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x6896D80)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x6896A00)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x6896A70)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x6896720)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6896950)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_OVERRIDECAMERAMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x6899080)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REFRESHMOUSEMODECAMERALOCK_OFFSET UNITYSDK_OFFSET(0x6897C10)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REFRESHMOUSEMOVEDELTARECORDDATA_OFFSET UNITYSDK_OFFSET(0x6898B70)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REGISTERWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x68967B0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_RESETROTATING_OFFSET UNITYSDK_OFFSET(0x6896D10)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SETMANUALLOCKENABLED_OFFSET UNITYSDK_OFFSET(0x6899010)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGETBYMOUSEMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x68981F0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGETBYMOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x6898AF0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x6897980)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_TOGGLEMANUALLOCK_OFFSET UNITYSDK_OFFSET(0x68987F0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_UNREGISTERWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x6896B70)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x68991E0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__SWITCHMANUALLOCKTARGETBYMOUSEMOVEDELTA_B__12_0_OFFSET UNITYSDK_OFFSET(0x6899290)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__TOGGLEMANUALLOCK_B__9_0_OFFSET UNITYSDK_OFFSET(0x6899280)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x68992A0)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x6899310)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x6899340)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x6899350)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x6899360)
#define MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x6899370)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPlayerCameraChildWindowController_TypeDefinitionIndex = 45560;

	class UIInLevelPlayerCameraChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean isRotating; // 0x2F8
		::Class_2_69CBB7FF0BE6A673_15* _view; // 0x300
		::UnityEngine::Vector2 _curFrameAxisValue; // 0x308
		::UnityEngine::Vector2 _curFrameRawAxisValue; // 0x310
		::System::Boolean _isManualLockEnabled; // 0x318
		::System::Boolean _isMouseScrollCD; // 0x319
		::System::Boolean _isMouseMoveDeltaCD; // 0x31A
		::System::Boolean _isToggleManualLockCD; // 0x31B
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* _manualLockMouseMoveDeltaRecordData; // 0x320
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* _mouseModeMouseMoveDeltaRecordData; // 0x328
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x330
		::MoleMole::InputLogicEventType _overrideCameraMoveEvent; // 0x334

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void RefreshMouseModeCameraLock(::UnityEngine::Vector2 mouseDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REFRESHMOUSEMODECAMERALOCK_OFFSET))(this, mouseDelta);
		}

		::System::Boolean ToggleManualLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_TOGGLEMANUALLOCK_OFFSET))(this);
		}

		::System::Boolean SwitchManualLockTarget(::System::Boolean isPrev)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGET_OFFSET))(this, isPrev);
		}

		::System::Boolean SwitchManualLockTargetByMouseScroll(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGETBYMOUSESCROLL_OFFSET))(this, inputAction);
		}

		::System::Boolean SwitchManualLockTargetByMouseMoveDelta(::UnityEngine::Vector2 mouseDelta)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SWITCHMANUALLOCKTARGETBYMOUSEMOVEDELTA_OFFSET))(this, mouseDelta);
		}

		::System::Void AddMouseMoveDeltaRecordData(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* dataList, ::System::Single delta, ::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ADDMOUSEMOVEDELTARECORDDATA_OFFSET))(this, dataList, delta, curTime);
		}

		::System::Void ClearMouseMoveDeltaRecordData(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_CLEARMOUSEMOVEDELTARECORDDATA_OFFSET))(this, dataList);
		}

		::System::Single GetTotalMouseMoveDelta(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* dataList)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_GETTOTALMOUSEMOVEDELTA_OFFSET))(this, dataList);
		}

		::System::Void RefreshMouseMoveDeltaRecordData(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* dataList, ::System::Single curTime, ::System::Single maxRecordTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REFRESHMOUSEMOVEDELTARECORDDATA_OFFSET))(this, dataList, curTime, maxRecordTime);
		}

		::System::Void SetManualLockEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_SETMANUALLOCKENABLED_OFFSET))(this, isEnabled);
		}

		::System::Void OverrideCameraMoveEvent(::MoleMole::InputLogicEventType moveEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_OVERRIDECAMERAMOVEEVENT_OFFSET))(this, moveEvent);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void ResetRotating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_RESETROTATING_OFFSET))(this);
		}

		::System::Void RegisterWorldUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_REGISTERWORLDUPDATE_OFFSET))(this);
		}

		::System::Void UnregisterWorldUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER_UNREGISTERWORLDUPDATE_OFFSET))(this);
		}

		::System::Void _ToggleManualLock_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__TOGGLEMANUALLOCK_B__9_0_OFFSET))(this);
		}

		::System::Void _SwitchManualLockTargetByMouseMoveDelta_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER__SWITCHMANUALLOCKTARGETBYMOUSEMOVEDELTA_B__12_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPLAYERCAMERACHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
