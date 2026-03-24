#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EMaterialLodStatus_TypeDefinitionIndex = 29919;

	enum class EMaterialLodStatus : ::System::Int32
	{
		IsShow = 0,
		Showing = 1,
		IsHide = 2,
	};
}
