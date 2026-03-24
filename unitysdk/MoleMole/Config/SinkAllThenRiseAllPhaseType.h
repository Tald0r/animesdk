#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SinkAllThenRiseAllPhaseType_TypeDefinitionIndex = 49710;

	enum class SinkAllThenRiseAllPhaseType : ::System::Int32
	{
		Sink = 1,
		SinkAndRise = 0,
		Rise = 2,
	};
}
