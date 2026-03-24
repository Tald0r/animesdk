#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyAdvBezierModeEnum_TypeDefinitionIndex = 36635;

	enum class CurvyAdvBezierModeEnum : ::System::Int32
	{
		None = 0,
		Direction = 1,
		Length = 2,
		Combine = 8,
	};
}
