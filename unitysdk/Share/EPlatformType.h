#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlatformType_TypeDefinitionIndex = 16397;

	enum class EPlatformType : ::System::Int32
	{
		MacOS = 12,
		Xbox = 26,
		CloudMacOS = 13,
		CloudPC = 9,
		Unknown = 0,
		WAP = 5,
		Sony = 6,
		PS5 = 11,
		EnumCount = 27,
		PC = 3,
		CloudAndroid = 8,
		WEB = 4,
		CloudIOS = 10,
		Nintendo = 7,
		IOS = 1,
		Android = 2,
	};
}
