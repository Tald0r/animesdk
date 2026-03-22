#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TrackBindType_TypeDefinitionIndex = 52105;

	enum class TrackBindType : ::System::Int32
	{
		Transform = 0,
		Animator = 1,
		Null = 2,
	};
}
