#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::InputSystem { class PlayerInput; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_PLAYERLEFTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECBE20)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInputManager_PlayerLeftEvent_TypeDefinitionIndex = 27594;

	class PlayerInputManager_PlayerLeftEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUTMANAGER_PLAYERLEFTEVENT__CTOR_OFFSET))(this);
		}
	};
}
