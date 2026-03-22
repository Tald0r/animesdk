#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionReference; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8382D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x838370)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x838420)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x8381E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x838590)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x838100)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_REFERENCE_OFFSET UNITYSDK_OFFSET(0x838190)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18682240)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18682330)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8381C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x8381A0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionProperty_TypeDefinitionIndex = 27433;

	struct alignas(8) InputActionProperty
	{
		::System::Boolean m_UseReference; // 0x10
		::UnityEngine::InputSystem::InputAction* m_Action; // 0x18
		::UnityEngine::InputSystem::InputActionReference* m_Reference; // 0x20

		::System::Void _ctor(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY__CTOR_OFFSET))(this, action);
		}

		::System::Void _ctor_1(::UnityEngine::InputSystem::InputActionReference* reference)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY__CTOR_1_OFFSET))(this, reference);
		}

		::UnityEngine::InputSystem::InputAction* get_action()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_ACTION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionReference* get_reference()
		{
			return ((::UnityEngine::InputSystem::InputActionReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GET_REFERENCE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::InputActionProperty other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::InputSystem::InputAction* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::UnityEngine::InputSystem::InputActionReference* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputActionReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_2_OFFSET))(this, other);
		}

		::System::Boolean Equals_3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_EQUALS_3_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::InputActionProperty left, ::UnityEngine::InputSystem::InputActionProperty right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputActionProperty, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::InputActionProperty left, ::UnityEngine::InputSystem::InputActionProperty right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputActionProperty, ::UnityEngine::InputSystem::InputActionProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONPROPERTY_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
