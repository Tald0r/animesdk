#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputInteractionContext.h"

#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_GET_DURATIONORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A690A20)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A690AA0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_PROCESS_OFFSET UNITYSDK_OFFSET(0x1A690AC0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_RESET_OFFSET UNITYSDK_OFFSET(0x1A690DB0)
#define UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A690DC0)

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int SlowTapInteraction_TypeDefinitionIndex = 27916;

	class SlowTapInteraction : public ::System::Object
	{
	public:
		::System::Single pressPoint; // 0x10
		::System::Single duration; // 0x14
		::System::Double m_SlowTapStartTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Single get_durationOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_GET_DURATIONORDEFAULT_OFFSET))(this);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void Process(::UnityEngine::InputSystem::InputInteractionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputInteractionContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_PROCESS_OFFSET))(this, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INTERACTIONS_SLOWTAPINTERACTION_RESET_OFFSET))(this);
		}
	};
}
