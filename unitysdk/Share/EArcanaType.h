#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EArcanaType_TypeDefinitionIndex = 10872;

	enum class EArcanaType : ::System::Int16
	{
		FanJi = 3,
		HuoQiu = 2,
		EnumCount = 5,
		Invalid = 0,
		Dun = 1,
		LiChang = 4,
	};
}
