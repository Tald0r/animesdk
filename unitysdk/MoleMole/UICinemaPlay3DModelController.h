#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3B1F5BF4ACBF54F8.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_CA24C6A62B684763.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/CinemaProjectorStruct.h"
#include "unitysdk/MoleMole/ConfigCinemaDepthOfFieldParam.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Struct_2_395B739A1AC58399_1.h"
#include "unitysdk/Struct_2_FBB226FE359AAAE1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"

class Class_2_60638234271CCDB8_38;
namespace MoleMole { class MonoCinemaCameraConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ADJUSTPROJECTORPOSITION_OFFSET UNITYSDK_OFFSET(0xBF4DC70)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGECINEMALIGHTSTATE_OFFSET UNITYSDK_OFFSET(0xBF4F900)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGEPROJECTORACTIVE_OFFSET UNITYSDK_OFFSET(0xBF4DBE0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGEPROJECTORPOSITION_OFFSET UNITYSDK_OFFSET(0xBF4DCE0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CINEMASETCAMERA_OFFSET UNITYSDK_OFFSET(0xBF4FAC0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0xBF4F820)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0xBF4EEF0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xBF4EEE0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITCINEMAENV_OFFSET UNITYSDK_OFFSET(0xBF4F890)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITPROJECTOR_OFFSET UNITYSDK_OFFSET(0xBF4DA00)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITVOLUME_OFFSET UNITYSDK_OFFSET(0xBF4E180)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF4F500)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF4F5A0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF4EF00)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF4F490)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCAMERAGROUP_OFFSET UNITYSDK_OFFSET(0xBF4F170)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCAMERAINITDATA_OFFSET UNITYSDK_OFFSET(0xBF4FD50)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCINEMAAVATARLIGHTWITHCAMERA_OFFSET UNITYSDK_OFFSET(0xBF50130)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCINEMACAMERAFOGEFFECT_OFFSET UNITYSDK_OFFSET(0xBF50370)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHENABLE_OFFSET UNITYSDK_OFFSET(0xBF4E3B0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDMODE_OFFSET UNITYSDK_OFFSET(0xBF4E570)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDSTATE_1_OFFSET UNITYSDK_OFFSET(0xBF4E8F0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDSTATE_OFFSET UNITYSDK_OFFSET(0xBF4E630)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETFOGPARAM_OFFSET UNITYSDK_OFFSET(0xBF4EAE0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SWITCHCAMERAPOS_OFFSET UNITYSDK_OFFSET(0xBF4F260)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF50AA0)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF50B10)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF50B80)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF50B90)
#define MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBF50BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlay3DModelController_TypeDefinitionIndex = 40930;

	class UICinemaPlay3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::MoleMole::CinemaProjectorStruct defaultProjectorPos; // 0x340
		::UnityEngine::Rendering::Volume* postVolume; // 0x358
		::UnityEngine::Rendering::Universal::DepthOfField* depthOfField; // 0x360
		::Class_2_60638234271CCDB8_38* _view; // 0x368
		::MoleMole::MonoCinemaCameraConfig* nowCameraConfig; // 0x370
		::MoleMole::CinemaCameraPosEnum nowCameraPosEnum; // 0x378
		::Enum_3_3B1F5BF4ACBF54F8 nowLightState; // 0x37C
		::UnityEngine::GameObject* nowLightGameObject; // 0x380
		::UnityEngine::GameObject* nowEffectGameObject; // 0x388
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::Struct_2_FBB226FE359AAAE1>* cameraInitDict; // 0x390
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::Struct_2_395B739A1AC58399_1>* fogEffectInitData; // 0x398
		::Struct_2_FBB226FE359AAAE1 nowCameraInitData; // 0x3A0
		::Struct_2_FBB226FE359AAAE1 nowCameraMoveBaseData; // 0x3C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitProjector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITPROJECTOR_OFFSET))(this);
		}

		::System::Void ChangeProjectorActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGEPROJECTORACTIVE_OFFSET))(this, isActive);
		}

		::System::Void AdjustProjectorPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ADJUSTPROJECTORPOSITION_OFFSET))(this);
		}

		::System::Void ChangeProjectorPosition(::MoleMole::CinemaCameraPosEnum posEnum)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGEPROJECTORPOSITION_OFFSET))(this, posEnum);
		}

		::System::Void InitVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITVOLUME_OFFSET))(this);
		}

		::System::Void SetDepthEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHENABLE_OFFSET))(this, enable);
		}

		::System::Void SetDepthOfFieldMode(::UnityEngine::Rendering::Universal::DepthOfFieldMode fieldMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfFieldMode))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDMODE_OFFSET))(this, fieldMode);
		}

		::System::Void SetDepthOfFieldState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDSTATE_OFFSET))(this);
		}

		::System::Void SetDepthOfFieldState_1(::MoleMole::ConfigCinemaDepthOfFieldParam depthParam)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigCinemaDepthOfFieldParam))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETDEPTHOFFIELDSTATE_1_OFFSET))(this, depthParam);
		}

		::System::Void SetFogParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETFOGPARAM_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_60638234271CCDB8_38* GetView()
		{
			return ((::Class_2_60638234271CCDB8_38*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void InitCinemaEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_INITCINEMAENV_OFFSET))(this);
		}

		::System::Void SetCameraGroup(::Enum_3_CA24C6A62B684763 groupEnum)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_CA24C6A62B684763))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCAMERAGROUP_OFFSET))(this, groupEnum);
		}

		::System::Void SwitchCameraPos(::MoleMole::CinemaCameraPosEnum cameraSite)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SWITCHCAMERAPOS_OFFSET))(this, cameraSite);
		}

		::System::Void CinemaSetCamera(::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CINEMASETCAMERA_OFFSET))(this, targetCamera);
		}

		::System::Void SetCameraInitData(::MoleMole::CinemaCameraPosEnum cameraSite)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCAMERAINITDATA_OFFSET))(this, cameraSite);
		}

		::System::Void ChangeCinemaLightState(::Enum_3_3B1F5BF4ACBF54F8 lightState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_3B1F5BF4ACBF54F8))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_CHANGECINEMALIGHTSTATE_OFFSET))(this, lightState);
		}

		::System::Void SetCinemaAvatarLightWithCamera(::MoleMole::CinemaCameraPosEnum cameraSite)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCINEMAAVATARLIGHTWITHCAMERA_OFFSET))(this, cameraSite);
		}

		::System::Void SetCinemaCameraFogEffect(::MoleMole::CinemaCameraPosEnum cameraSite, ::System::Boolean isBindCamera)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER_SETCINEMACAMERAFOGEFFECT_OFFSET))(this, cameraSite, isBindCamera);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAY3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
