#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RedirectType_TypeDefinitionIndex = 29558;

	enum class RedirectType : ::System::Int32
	{
		Null = 0,
		GameObject = 1,
		Component = 2,
	};
}
