#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int VideoQuality_TypeDefinitionIndex = 38182;

	enum class VideoQuality : ::System::Int32
	{
		CD = 2,
		SD = 0,
		HD = 1,
		LD = 3,
	};
}
