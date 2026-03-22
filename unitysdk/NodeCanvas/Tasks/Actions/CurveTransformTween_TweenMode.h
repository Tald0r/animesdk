#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CurveTransformTween_TweenMode_TypeDefinitionIndex = 26007;

	enum class CurveTransformTween_TweenMode : ::System::Int32
	{
		Additive = 1,
		Absolute = 0,
	};
}
