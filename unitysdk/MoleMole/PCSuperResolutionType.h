#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PCSuperResolutionType_TypeDefinitionIndex = 46794;

	enum class PCSuperResolutionType : ::System::Int32
	{
		FSR = 2,
		None = 0,
		DLSS = 1,
	};
}
