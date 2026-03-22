#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCamera.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_BLENDCAMERAOVERRIDE_OFFSET UNITYSDK_OFFSET(0x62930B0)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x6293080)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x6293310)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x6293440)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x62934B0)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA___BASE_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x62937A0)
#define MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x62937D0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AnimationVirtualCamera_TypeDefinitionIndex = 43231;

	class AnimationVirtualCamera : public ::Cinemachine::CinemachineVirtualCamera
	{
	public:
		::Cinemachine::CameraState Field_7_0; // 0x1C8
		::Cinemachine::CinemachineBlend* Field_7_1; // 0x2B0
		::UnityEngine::AnimationCurve* Field_7_2; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void BlendCameraOverride(::Cinemachine::ICinemachineCamera* a1, ::Cinemachine::ICinemachineCamera* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_BLENDCAMERAOVERRIDE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA___BASE_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ANIMATIONVIRTUALCAMERA___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
