#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectType_TypeDefinitionIndex = 71791;

	enum class EtherEyesObjectType : ::System::Int32
	{
		Find = 3,
		PathWire = 5,
		Show = 2,
		Fix = 6,
		Break = 0,
		Path = 4,
		BreakCore = 1,
	};
}
