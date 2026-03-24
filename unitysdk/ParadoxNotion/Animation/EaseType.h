#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Animation
{
	inline static constexpr unsigned int EaseType_TypeDefinitionIndex = 27212;

	enum class EaseType : ::System::Int32
	{
		BounceInOut = 27,
		ElasticIn = 22,
		CircularIn = 16,
		CircularOut = 17,
		ElasticOut = 23,
		SinusoidalOut = 20,
		CubicInOut = 12,
		ExponentialInOut = 15,
		ExponentialOut = 14,
		CircularInOut = 18,
		BounceOut = 26,
		QuadraticInOut = 3,
		QuinticIn = 7,
		BackInOut = 30,
		QuarticIn = 4,
		BackIn = 28,
		SinusoidalInOut = 21,
		ExponentialIn = 13,
		CubicIn = 10,
		QuadraticOut = 2,
		QuinticOut = 8,
		BackOut = 29,
		QuinticInOut = 9,
		ElasticInOut = 24,
		Linear = 0,
		CubicOut = 11,
		QuarticOut = 5,
		QuarticInOut = 6,
		SinusoidalIn = 19,
		BounceIn = 25,
		QuadraticIn = 1,
	};
}
