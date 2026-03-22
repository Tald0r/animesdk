#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockMapType_TypeDefinitionIndex = 17384;

	enum class EUnlockMapType : ::System::Int16
	{
		None = 0,
		Dialog = 4,
		Begin = 1,
		End = 2,
		Fight = 3,
	};
}
