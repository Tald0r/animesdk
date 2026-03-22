#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRControllerWithRumble.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1A7860A0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A786080)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A786060)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1A785FE0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x1A785F80)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x1A785FA0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x1A785FC0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x1A786020)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x1A786040)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x1A785F40)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1A786000)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1A785F60)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A786090)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A786070)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1A785FF0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x1A785F90)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET UNITYSDK_OFFSET(0x1A785FB0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET UNITYSDK_OFFSET(0x1A785FD0)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET UNITYSDK_OFFSET(0x1A786030)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET UNITYSDK_OFFSET(0x1A786050)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET UNITYSDK_OFFSET(0x1A785F50)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1A786010)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1A785F70)
#define UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A786220)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int OpenVROculusTouchController_TypeDefinitionIndex = 27395;

	class OpenVROculusTouchController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickTouched_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICK_OFFSET))(this);
		}

		::System::Void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_PRIMARYBUTTON_OFFSET))(this);
		}

		::System::Void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_PRIMARYBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_SECONDARYBUTTON_OFFSET))(this);
		}

		::System::Void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_SECONDARYBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_GRIPPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_TRIGGERPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKCLICKED_OFFSET))(this);
		}

		::System::Void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKCLICKED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_THUMBSTICKTOUCHED_OFFSET))(this);
		}

		::System::Void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_THUMBSTICKTOUCHED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_GET_DEVICEANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_SET_DEVICEANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_OPENVROCULUSTOUCHCONTROLLER_FINISHSETUP_OFFSET))(this);
		}
	};
}
