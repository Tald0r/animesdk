#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectMetaFlags_TypeDefinitionIndex = 47175;

	enum class EViewObjectMetaFlags : ::System::Int32
	{
		IsGroup = 2,
		HasEntity = 4,
		IsMember = 1,
		None = 0,
	};
}
