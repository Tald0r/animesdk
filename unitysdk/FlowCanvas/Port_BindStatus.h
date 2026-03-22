#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas
{
	inline static constexpr unsigned int Port_BindStatus_TypeDefinitionIndex = 25925;

	enum class Port_BindStatus : ::System::Int32
	{
		Valid = 0,
		Missing = 1,
		InvalidCast = 2,
	};
}
