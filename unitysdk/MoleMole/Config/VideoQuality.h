#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int VideoQuality_TypeDefinitionIndex = 79677;

	enum class VideoQuality : ::System::Int32
	{
		SD = 0,
		CD = 2,
		HD = 1,
		LD = 3,
	};
}
