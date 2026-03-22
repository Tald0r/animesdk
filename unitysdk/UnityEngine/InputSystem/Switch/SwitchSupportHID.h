#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHSUPPORTHID_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19F6AA40)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchSupportHID_TypeDefinitionIndex = 27665;

	class SwitchSupportHID : public ::System::Object
	{
	public:
		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHSUPPORTHID_INITIALIZE_OFFSET))();
		}
	};
}
