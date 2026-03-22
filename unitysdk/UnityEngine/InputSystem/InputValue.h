#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1A7884D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_OFFSET UNITYSDK_OFFSET(0x1A788420)
#define UNITYENGINE_INPUTSYSTEM_INPUTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7884F0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputValue_TypeDefinitionIndex = 27586;

	class InputValue : public ::System::Object
	{
	public:
		::System::Nullable_1<::UnityEngine::InputSystem::InputAction_CallbackContext> m_Context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTVALUE__CTOR_OFFSET))(this);
		}

		::System::Object* Get()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_OFFSET))(this);
		}

		::System::Boolean get_isPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_ISPRESSED_OFFSET))(this);
		}
	};
}
