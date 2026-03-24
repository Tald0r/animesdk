#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockMapType_TypeDefinitionIndex = 13773;

	enum class EUnlockMapType : ::System::Int16
	{
		Fight = 3,
		End = 2,
		None = 0,
		Dialog = 4,
		Begin = 1,
	};
}
