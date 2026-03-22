#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcStringValueType_TypeDefinitionIndex = 76508;

	enum class HackerGameNpcStringValueType : ::System::Int32
	{
		OnCreatedEvent = 4,
		OnFeverDeathBodyEffectKey = 9,
		None = 0,
		OnDeathEvent = 2,
		EntityTag = 11,
		OnDamagedEvent = 1,
		OnEscapeEffectKey = 10,
		OnDamagedEffectKey = 5,
		OnDamagedCameraShakeKey = 7,
		OnBeforeMoveEvent = 3,
		OnDeathBodyEffectKey = 8,
		OnFeverDamagedEffectKey = 6,
	};
}
