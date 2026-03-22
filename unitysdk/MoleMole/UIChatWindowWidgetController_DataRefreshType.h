#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController_DataRefreshType_TypeDefinitionIndex = 57444;

	enum class UIChatWindowWidgetController_DataRefreshType : ::System::Int32
	{
		History = 1,
		New = 2,
		All = 7,
		None = 0,
		Nothing = 4,
	};
}
