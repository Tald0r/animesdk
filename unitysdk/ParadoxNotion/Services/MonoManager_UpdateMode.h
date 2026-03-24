#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int MonoManager_UpdateMode_TypeDefinitionIndex = 26377;

	enum class MonoManager_UpdateMode : ::System::Int32
	{
		FixedUpdate = 2,
		NormalUpdate = 0,
		LateUpdate = 1,
	};
}
