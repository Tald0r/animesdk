#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Animation
{
	inline static constexpr unsigned int EaseType_TypeDefinitionIndex = 25405;

	enum class EaseType : ::System::Int32
	{
		BounceOut = 26,
		ElasticIn = 22,
		QuarticInOut = 6,
		BackInOut = 30,
		QuadraticOut = 2,
		SinusoidalOut = 20,
		ExponentialIn = 13,
		BackOut = 29,
		ElasticOut = 23,
		ExponentialInOut = 15,
		BackIn = 28,
		QuarticOut = 5,
		BounceIn = 25,
		SinusoidalIn = 19,
		Linear = 0,
		CircularInOut = 18,
		QuinticIn = 7,
		QuarticIn = 4,
		CubicOut = 11,
		QuadraticIn = 1,
		QuadraticInOut = 3,
		SinusoidalInOut = 21,
		CircularOut = 17,
		ElasticInOut = 24,
		CircularIn = 16,
		CubicInOut = 12,
		QuinticOut = 8,
		BounceInOut = 27,
		QuinticInOut = 9,
		CubicIn = 10,
		ExponentialOut = 14,
	};
}
