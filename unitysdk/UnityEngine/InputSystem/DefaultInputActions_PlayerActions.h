#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class DefaultInputActions; }
namespace UnityEngine::InputSystem { class DefaultInputActions_IPlayerActions; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_DISABLE_OFFSET UNITYSDK_OFFSET(0x94ECD0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_ENABLE_OFFSET UNITYSDK_OFFSET(0x94EC50)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x94ED20)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_FIRE_OFFSET UNITYSDK_OFFSET(0x94EC30)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_LOOK_OFFSET UNITYSDK_OFFSET(0x94EC10)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_MOVE_OFFSET UNITYSDK_OFFSET(0x94EBF0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_OFFSET UNITYSDK_OFFSET(0x935DD0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AB27E20)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_SETCALLBACKS_OFFSET UNITYSDK_OFFSET(0x94ED50)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x3074E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int DefaultInputActions_PlayerActions_TypeDefinitionIndex = 28522;

	struct alignas(8) DefaultInputActions_PlayerActions
	{
		::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper; // 0x10

		::System::Void _ctor(::UnityEngine::InputSystem::DefaultInputActions* wrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::DefaultInputActions*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS__CTOR_OFFSET))(this, wrapper);
		}

		::UnityEngine::InputSystem::InputAction* get_Move()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_MOVE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_Look()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_LOOK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_Fire()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_FIRE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionMap* Get()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_DISABLE_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_ENABLED_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::InputActionMap* op_Implicit(::UnityEngine::InputSystem::DefaultInputActions_PlayerActions set)
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::UnityEngine::InputSystem::DefaultInputActions_PlayerActions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_OP_IMPLICIT_OFFSET))(set);
		}

		::System::Void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* instance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_SETCALLBACKS_OFFSET))(this, instance);
		}
	};
}
