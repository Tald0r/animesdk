#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class DefaultInputActions; }
namespace UnityEngine::InputSystem { class DefaultInputActions_IUIActions; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_DISABLE_OFFSET UNITYSDK_OFFSET(0x94CC90)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_ENABLE_OFFSET UNITYSDK_OFFSET(0x94CC10)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x387750)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_CLICK_OFFSET UNITYSDK_OFFSET(0x94CB90)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x94CCE0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_MIDDLECLICK_OFFSET UNITYSDK_OFFSET(0x387720)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_NAVIGATE_OFFSET UNITYSDK_OFFSET(0x94CB50)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_OFFSET UNITYSDK_OFFSET(0x94CBF0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_POINT_OFFSET UNITYSDK_OFFSET(0x929250)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_RIGHTCLICK_OFFSET UNITYSDK_OFFSET(0x94CBD0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_SCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x94CBB0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_SUBMIT_OFFSET UNITYSDK_OFFSET(0x94CB70)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x387650)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x3876F0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AAC0D20)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_SETCALLBACKS_OFFSET UNITYSDK_OFFSET(0x94CD10)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x3074E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int DefaultInputActions_UIActions_TypeDefinitionIndex = 28523;

	struct alignas(8) DefaultInputActions_UIActions
	{
		::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper; // 0x10

		::System::Void _ctor(::UnityEngine::InputSystem::DefaultInputActions* wrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::DefaultInputActions*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS__CTOR_OFFSET))(this, wrapper);
		}

		::UnityEngine::InputSystem::InputAction* get_Navigate()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_NAVIGATE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_Submit()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_SUBMIT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_Cancel()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_CANCEL_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_Point()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_POINT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_Click()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_CLICK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_ScrollWheel()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_SCROLLWHEEL_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_MiddleClick()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_MIDDLECLICK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_RightClick()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_RIGHTCLICK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_TrackedDevicePosition()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_TRACKEDDEVICEPOSITION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_TrackedDeviceOrientation()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_TRACKEDDEVICEORIENTATION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionMap* Get()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_DISABLE_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_GET_ENABLED_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::InputActionMap* op_Implicit(::UnityEngine::InputSystem::DefaultInputActions_UIActions set)
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::UnityEngine::InputSystem::DefaultInputActions_UIActions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_OP_IMPLICIT_OFFSET))(set);
		}

		::System::Void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions_IUIActions* instance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::DefaultInputActions_IUIActions*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_UIACTIONS_SETCALLBACKS_OFFSET))(this, instance);
		}
	};
}
