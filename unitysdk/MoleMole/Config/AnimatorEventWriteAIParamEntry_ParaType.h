#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventWriteAIParamEntry_ParaType_TypeDefinitionIndex = 49264;

	enum class AnimatorEventWriteAIParamEntry_ParaType : ::System::Int32
	{
		Int = 1,
		Bool = 3,
		String = 2,
		Float = 0,
	};
}
