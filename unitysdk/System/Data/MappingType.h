#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int MappingType_TypeDefinitionIndex = 36493;

	enum class MappingType : ::System::Int32
	{
		Element = 1,
		Attribute = 2,
		SimpleContent = 3,
		Hidden = 4,
	};
}
