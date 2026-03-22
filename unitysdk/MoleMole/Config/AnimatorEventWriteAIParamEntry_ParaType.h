#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventWriteAIParamEntry_ParaType_TypeDefinitionIndex = 67000;

	enum class AnimatorEventWriteAIParamEntry_ParaType : ::System::Int32
	{
		Float = 0,
		String = 2,
		Bool = 3,
		Int = 1,
	};
}
