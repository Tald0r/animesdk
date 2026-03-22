#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRController.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1A68E420)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_APP_OFFSET UNITYSDK_OFFSET(0x1A68E360)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A68E400)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A68E3E0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_HOME_OFFSET UNITYSDK_OFFSET(0x1A68E380)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERED_OFFSET UNITYSDK_OFFSET(0x1A68E300)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERING_OFFSET UNITYSDK_OFFSET(0x1A68E340)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x1A68E3A0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1A68E3C0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1A68E2C0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEDOWN_OFFSET UNITYSDK_OFFSET(0x1A68E320)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEUP_OFFSET UNITYSDK_OFFSET(0x1A68E2E0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_APP_OFFSET UNITYSDK_OFFSET(0x1A68E370)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A68E410)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A68E3F0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_HOME_OFFSET UNITYSDK_OFFSET(0x1A68E390)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERED_OFFSET UNITYSDK_OFFSET(0x1A68E310)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERING_OFFSET UNITYSDK_OFFSET(0x1A68E350)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADCLICKED_OFFSET UNITYSDK_OFFSET(0x1A68E3B0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET UNITYSDK_OFFSET(0x1A68E3D0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPAD_OFFSET UNITYSDK_OFFSET(0x1A68E2D0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEDOWN_OFFSET UNITYSDK_OFFSET(0x1A68E330)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEUP_OFFSET UNITYSDK_OFFSET(0x1A68E2F0)
#define UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68E5A0)

namespace Unity::XR::GoogleVr
{
	inline static constexpr unsigned int DaydreamController_TypeDefinitionIndex = 27403;

	class DaydreamController : public ::UnityEngine::InputSystem::XR::XRController
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _volumeUp_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::ButtonControl* _app_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _home_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _volumeDown_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _recentered_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _recentering_k__BackingField; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPAD_OFFSET))(this);
		}

		::System::Void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPAD_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeUp()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEUP_OFFSET))(this);
		}

		::System::Void set_volumeUp(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEUP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_recentered()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERED_OFFSET))(this);
		}

		::System::Void set_recentered(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeDown()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_VOLUMEDOWN_OFFSET))(this);
		}

		::System::Void set_volumeDown(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_VOLUMEDOWN_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_recentering()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_RECENTERING_OFFSET))(this);
		}

		::System::Void set_recentering(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_RECENTERING_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_app()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_APP_OFFSET))(this);
		}

		::System::Void set_app(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_APP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_home()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_HOME_OFFSET))(this);
		}

		::System::Void set_home(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_HOME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADCLICKED_OFFSET))(this);
		}

		::System::Void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADCLICKED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_TOUCHPADTOUCHED_OFFSET))(this);
		}

		::System::Void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_TOUCHPADTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_GET_DEVICEACCELERATION_OFFSET))(this);
		}

		::System::Void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_SET_DEVICEACCELERATION_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMCONTROLLER_FINISHSETUP_OFFSET))(this);
		}
	};
}
