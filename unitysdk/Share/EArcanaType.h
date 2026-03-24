#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EArcanaType_TypeDefinitionIndex = 17501;

	enum class EArcanaType : ::System::Int16
	{
		Invalid = 0,
		LiChang = 4,
		HuoQiu = 2,
		EnumCount = 5,
		Dun = 1,
		FanJi = 3,
	};
}
