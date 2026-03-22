#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIFashionStore3DModelController_CameraInfo.h"
#include "unitysdk/MoleMole/UIFashionStore3DModelController_ModelType.h"

class Class_2_5F64140FAB2210F3;
class Class_2_60638234271CCDB8_26;
namespace MoleMole { class FashionStoreCameraArgs; }
namespace MoleMole { class TweenScale; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_DOSINGLECAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x8BF0D70)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x8BF08A0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_GET_CANTICK_OFFSET UNITYSDK_OFFSET(0x8BF1DA0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_GET_CURTIMESCALE_OFFSET UNITYSDK_OFFSET(0x8BF1B70)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8BEFE10)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8BF1580)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BF0010)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BF00B0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BEFE20)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8BEFFA0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_REFRESHOBJECTSTICKSTATE_OFFSET UNITYSDK_OFFSET(0x8BF19A0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_SETMODELTYPE_OFFSET UNITYSDK_OFFSET(0x8BF0270)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_SETSCALEPERIOD_OFFSET UNITYSDK_OFFSET(0x8BF09B0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_SETSHAKEINFO_OFFSET UNITYSDK_OFFSET(0x8BF0910)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_STARTORRESUMECAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x8BF0BB0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_STOPCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x8BF1DC0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF2070)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER__STARTORRESUMECAMERASHAKE_B__16_0_OFFSET UNITYSDK_OFFSET(0x8BF2190)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BF21C0)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BF2230)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BF2240)
#define MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8BF2250)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStore3DModelController_TypeDefinitionIndex = 40086;

	class UIFashionStore3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_60638234271CCDB8_26* _view; // 0x340
		::UnityEngine::Camera* m_camera; // 0x348
		::MoleMole::UIFashionStore3DModelController_ModelType m_modelType; // 0x350
		::MoleMole::FashionStoreCameraArgs* m_args; // 0x358
		::Foundation::Coroutine::CoroutineHandle cameraShakeHandle; // 0x360
		::System::String* m_shakeKey; // 0x368
		::System::Single m_shakePeriod; // 0x370
		::Class_2_5F64140FAB2210F3* _camClip; // 0x378
		::MoleMole::Config::ConfigHollowChessboardCamera* _camConfig; // 0x380
		::System::Boolean _camInfoBeforeTimelineCached; // 0x388
		::MoleMole::UIFashionStore3DModelController_CameraInfo _camInfoBeforeTimeline; // 0x38C
		::System::Collections::Generic::List_1<::MoleMole::TweenScale*>* m_tweenScales; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetModelType(::MoleMole::UIFashionStore3DModelController_ModelType modelType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFashionStore3DModelController_ModelType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_SETMODELTYPE_OFFSET))(this, modelType);
		}

		::UnityEngine::Camera* GetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_GETCAMERA_OFFSET))(this);
		}

		::System::Void SetShakeInfo(::System::String* shakeKey, ::System::Single shakePeriod)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_SETSHAKEINFO_OFFSET))(this, shakeKey, shakePeriod);
		}

		::System::Void StartOrResumeCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_STARTORRESUMECAMERASHAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Single get_CurTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_GET_CURTIMESCALE_OFFSET))(this);
		}

		::System::Void SetScalePeriod(::System::Single periodTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_SETSCALEPERIOD_OFFSET))(this, periodTime);
		}

		::System::Boolean get_CanTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_GET_CANTICK_OFFSET))(this);
		}

		::System::Void RefreshObjectsTickState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_REFRESHOBJECTSTICKSTATE_OFFSET))(this);
		}

		::System::Void StopCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_STOPCAMERASHAKE_OFFSET))(this);
		}

		::System::Void DoSingleCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER_DOSINGLECAMERASHAKE_OFFSET))(this);
		}

		::System::Void _StartOrResumeCameraShake_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER__STARTORRESUMECAMERASHAKE_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
