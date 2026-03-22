#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetObjectActive_SetActiveMode_TypeDefinitionIndex = 26860;

	enum class SetObjectActive_SetActiveMode : ::System::Int32
	{
		Toggle = 2,
		Activate = 1,
		Deactivate = 0,
	};
}
