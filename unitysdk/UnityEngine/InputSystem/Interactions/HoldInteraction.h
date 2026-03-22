#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputInteractionContext.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_DURATIONORDEFAULT_OFFSET UNITYSDK_OFFSET(0x19F6ABF0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x19F6AC70)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x19F6AC90)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x19F6B160)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6B170)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int HoldInteraction_TypeDefinitionIndex = 27911;

	class HoldInteraction : public ::System::Object
	{
	public:
		::System::Single pressPoint; // 0x10
		::System::Single duration; // 0x14
		::System::Double m_TimePressed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Single get_durationOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_DURATIONORDEFAULT_OFFSET))(this);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputInteractionContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_PROCESS_OFFSET))(this, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_HOLDINTERACTION_RESET_OFFSET))(this);
		}
	};
}
