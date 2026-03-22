#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS_TRIGGEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8F2B5D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelTriggerAction_ActionSettings_TriggerEvent_TypeDefinitionIndex = 40889;

	class MonoLevelTriggerAction_ActionSettings_TriggerEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ACTIONSETTINGS_TRIGGEREVENT__CTOR_OFFSET))(this);
		}
	};
}
