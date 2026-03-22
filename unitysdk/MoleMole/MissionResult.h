#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MissionResult_TypeDefinitionIndex = 48737;

	enum class MissionResult : ::System::Byte
	{
		Silver_A = 0x3,
		Gold_S = 0x4,
		SS = 0x5,
		Fail = 0x0,
		Cooper_B = 0x2,
		Plastics_C = 0x1,
	};
}
