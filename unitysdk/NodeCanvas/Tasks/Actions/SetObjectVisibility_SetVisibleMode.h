#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetObjectVisibility_SetVisibleMode_TypeDefinitionIndex = 26874;

	enum class SetObjectVisibility_SetVisibleMode : ::System::Int32
	{
		Hide = 0,
		Toggle = 2,
		Show = 1,
	};
}
