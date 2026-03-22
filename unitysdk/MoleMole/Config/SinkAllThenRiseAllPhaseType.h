#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SinkAllThenRiseAllPhaseType_TypeDefinitionIndex = 62147;

	enum class SinkAllThenRiseAllPhaseType : ::System::Int32
	{
		Rise = 2,
		Sink = 1,
		SinkAndRise = 0,
	};
}
