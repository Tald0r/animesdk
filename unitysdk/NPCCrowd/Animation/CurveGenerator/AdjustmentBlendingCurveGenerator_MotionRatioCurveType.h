#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CurveGenerator
{
	inline static constexpr unsigned int AdjustmentBlendingCurveGenerator_MotionRatioCurveType_TypeDefinitionIndex = 38545;

	enum class AdjustmentBlendingCurveGenerator_MotionRatioCurveType : ::System::Int32
	{
		Angle = 3,
		TranslationZ = 2,
		TranslationY = 1,
		TranslationX = 0,
	};
}
