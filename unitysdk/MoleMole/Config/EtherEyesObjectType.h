#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectType_TypeDefinitionIndex = 64854;

	enum class EtherEyesObjectType : ::System::Int32
	{
		Path = 4,
		BreakCore = 1,
		Fix = 6,
		Show = 2,
		Break = 0,
		PathWire = 5,
		Find = 3,
	};
}
