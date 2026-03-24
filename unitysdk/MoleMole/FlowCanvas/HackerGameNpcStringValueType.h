#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcStringValueType_TypeDefinitionIndex = 43040;

	enum class HackerGameNpcStringValueType : ::System::Int32
	{
		OnFeverDeathBodyEffectKey = 9,
		OnDamagedCameraShakeKey = 7,
		OnFeverDamagedEffectKey = 6,
		OnDeathBodyEffectKey = 8,
		OnEscapeEffectKey = 10,
		EntityTag = 11,
		OnBeforeMoveEvent = 3,
		None = 0,
		OnDamagedEvent = 1,
		OnDeathEvent = 2,
		OnCreatedEvent = 4,
		OnDamagedEffectKey = 5,
	};
}
