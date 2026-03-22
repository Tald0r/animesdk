#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlatformType_TypeDefinitionIndex = 12923;

	enum class EPlatformType : ::System::Int32
	{
		Nintendo = 7,
		Sony = 6,
		MacOS = 12,
		WAP = 5,
		CloudMacOS = 13,
		Unknown = 0,
		PC = 3,
		Xbox = 26,
		CloudPC = 9,
		CloudIOS = 10,
		PS5 = 11,
		Android = 2,
		WEB = 4,
		CloudAndroid = 8,
		EnumCount = 27,
		IOS = 1,
	};
}
