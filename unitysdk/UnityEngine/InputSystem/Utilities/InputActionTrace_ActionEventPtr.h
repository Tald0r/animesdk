#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionPhase.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/ActionEvent.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { class IInputInteraction; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x927260)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x9272A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x927390)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_INTERACTION_OFFSET UNITYSDK_OFFSET(0x9272F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x927290)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x927380)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_TIME_OFFSET UNITYSDK_OFFSET(0x927350)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9273C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9273D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_READVALUE_OFFSET UNITYSDK_OFFSET(0x9273E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9273F0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InputActionTrace_ActionEventPtr_TypeDefinitionIndex = 27919;

	struct alignas(8) InputActionTrace_ActionEventPtr
	{
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x10
		::UnityEngine::InputSystem::LowLevel::ActionEvent* m_Ptr; // 0x18

		::UnityEngine::InputSystem::InputAction* get_action()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_ACTION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionPhase get_phase()
		{
			return ((::UnityEngine::InputSystem::InputActionPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_PHASE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_CONTROL_OFFSET))(this);
		}

		::UnityEngine::InputSystem::IInputInteraction* get_interaction()
		{
			return ((::UnityEngine::InputSystem::IInputInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_INTERACTION_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_TIME_OFFSET))(this);
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_DURATION_OFFSET))(this);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_GET_VALUESIZEINBYTES_OFFSET))(this);
		}

		::System::Object* ReadValueAsObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_READVALUEASOBJECT_OFFSET))(this);
		}

		::System::Void ReadValue(::System::Void* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_READVALUE_OFFSET))(this, buffer, bufferSize);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ACTIONEVENTPTR_TOSTRING_OFFSET))(this);
		}
	};
}
