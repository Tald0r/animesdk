#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MissionResult_TypeDefinitionIndex = 71987;

	enum class MissionResult : ::System::Byte
	{
		Silver_A = 0x3,
		Gold_S = 0x4,
		Cooper_B = 0x2,
		Fail = 0x0,
		SS = 0x5,
		Plastics_C = 0x1,
	};
}
