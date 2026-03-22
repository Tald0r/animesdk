#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/XR/OpenVR/ViveTracker.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1AB0B360)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1AB0B2E0)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIP_OFFSET UNITYSDK_OFFSET(0x1AB0B2C0)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x1AB0B300)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x1AB0B320)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1AB0B340)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIPPRESSED_OFFSET UNITYSDK_OFFSET(0x1AB0B2F0)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIP_OFFSET UNITYSDK_OFFSET(0x1AB0B2D0)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x1AB0B310)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRACKPADPRESSED_OFFSET UNITYSDK_OFFSET(0x1AB0B330)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x1AB0B350)
#define UNITY_XR_OPENVR_HANDEDVIVETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0B480)

namespace Unity::XR::OpenVR
{
	inline static constexpr unsigned int HandedViveTracker_TypeDefinitionIndex = 27394;

	class HandedViveTracker : public ::Unity::XR::OpenVR::ViveTracker
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_grip()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIP_OFFSET))(this);
		}

		::System::Void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_GRIPPRESSED_OFFSET))(this);
		}

		::System::Void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_GRIPPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_primary()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_PRIMARY_OFFSET))(this);
		}

		::System::Void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_PRIMARY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRACKPADPRESSED_OFFSET))(this);
		}

		::System::Void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRACKPADPRESSED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_GET_TRIGGERPRESSED_OFFSET))(this);
		}

		::System::Void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_SET_TRIGGERPRESSED_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_OPENVR_HANDEDVIVETRACKER_FINISHSETUP_OFFSET))(this);
		}
	};
}
