#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EDecalHideType_TypeDefinitionIndex = 28938;

	enum class EDecalHideType : ::System::Int32
	{
		JustEmission = 0,
		HideAll = 1,
	};
}
