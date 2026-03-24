#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FBIKChain_Smoothing_TypeDefinitionIndex = 36054;

	enum class FBIKChain_Smoothing : ::System::Int32
	{
		None = 0,
		Exponential = 1,
		Cubic = 2,
	};
}
