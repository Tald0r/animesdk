#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualShockGamepad.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1A57F0F0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1A57F090)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x1A57F0D0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1A57F0B0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1A57F0A0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x1A57F0E0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET UNITYSDK_OFFSET(0x1A57F0C0)
#define UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID__CTOR_OFFSET UNITYSDK_OFFSET(0x1A57F2D0)

namespace UnityEngine::InputSystem::DualShock
{
	inline static constexpr unsigned int DualShock3GamepadHID_TypeDefinitionIndex = 28651;

	class DualShock3GamepadHID : public ::UnityEngine::InputSystem::DualShock::DualShockGamepad
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightTriggerButton_k__BackingField; // 0x220
		::UnityEngine::InputSystem::Controls::ButtonControl* _playStationButton_k__BackingField; // 0x228
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftTriggerButton_k__BackingField; // 0x230

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftTriggerButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_LEFTTRIGGERBUTTON_OFFSET))(this);
		}

		::System::Void set_leftTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_LEFTTRIGGERBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightTriggerButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_RIGHTTRIGGERBUTTON_OFFSET))(this);
		}

		::System::Void set_rightTriggerButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_RIGHTTRIGGERBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_playStationButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_GET_PLAYSTATIONBUTTON_OFFSET))(this);
		}

		::System::Void set_playStationButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_SET_PLAYSTATIONBUTTON_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DUALSHOCK_DUALSHOCK3GAMEPADHID_FINISHSETUP_OFFSET))(this);
		}
	};
}
