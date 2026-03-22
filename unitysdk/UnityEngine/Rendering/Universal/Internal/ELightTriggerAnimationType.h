#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ELightTriggerAnimationType_TypeDefinitionIndex = 28937;

	enum class ELightTriggerAnimationType : ::System::Int32
	{
		SparkAnimation = 0,
		NoneAnimation = 1,
		LinearAnimation = 2,
	};
}
