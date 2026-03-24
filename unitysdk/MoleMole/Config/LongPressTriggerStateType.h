#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LongPressTriggerStateType_TypeDefinitionIndex = 61693;

	enum class LongPressTriggerStateType : ::System::Int32
	{
		OnRealTrigger = 1,
		OnPointDown = 0,
	};
}
