#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController_DataRefreshType_TypeDefinitionIndex = 44637;

	enum class UIChatWindowWidgetController_DataRefreshType : ::System::Int32
	{
		History = 1,
		New = 2,
		Nothing = 4,
		All = 7,
		None = 0,
	};
}
