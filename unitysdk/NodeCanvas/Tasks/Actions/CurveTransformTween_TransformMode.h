#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CurveTransformTween_TransformMode_TypeDefinitionIndex = 27693;

	enum class CurveTransformTween_TransformMode : ::System::Int32
	{
		Position = 0,
		Rotation = 1,
		Scale = 2,
	};
}
