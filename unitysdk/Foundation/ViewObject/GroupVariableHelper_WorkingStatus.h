#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper_WorkingStatus_TypeDefinitionIndex = 68074;

	enum class GroupVariableHelper_WorkingStatus : ::System::Int32
	{
		None = 0,
		Writing = 2,
		Reading = 1,
	};
}
