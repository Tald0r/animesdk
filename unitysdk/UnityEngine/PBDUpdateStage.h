#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDUpdateStage_TypeDefinitionIndex = 24323;

	enum class PBDUpdateStage : ::System::Int32
	{
		FixedUpdate = 0,
		LateUpdate = 1,
	};
}
