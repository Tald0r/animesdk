#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectMetaFlags_TypeDefinitionIndex = 71317;

	enum class EViewObjectMetaFlags : ::System::Int32
	{
		HasEntity = 4,
		None = 0,
		IsGroup = 2,
		IsMember = 1,
	};
}
