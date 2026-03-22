#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/TypeTable.h"

namespace System { class Type; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GETVALUETYPEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1A50C130)
#define UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50C4D0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputProcessor_TypeDefinitionIndex = 27511;

	class InputProcessor : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::TypeTable* StaticGet_s_Processors()
		{
			return (::UnityEngine::InputSystem::Utilities::TypeTable*)Il2CppClass::FromTypeDefinitionIndex(InputProcessor_TypeDefinitionIndex)->GetStaticField(0x206F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Type* GetValueTypeFromType(::System::Type* processorType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTPROCESSOR_GETVALUETYPEFROMTYPE_OFFSET))(processorType);
		}
	};
}
