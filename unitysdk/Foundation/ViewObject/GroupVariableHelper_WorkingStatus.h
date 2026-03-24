#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper_WorkingStatus_TypeDefinitionIndex = 41677;

	enum class GroupVariableHelper_WorkingStatus : ::System::Int32
	{
		Writing = 2,
		Reading = 1,
		None = 0,
	};
}
