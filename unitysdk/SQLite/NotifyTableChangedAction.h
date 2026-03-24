#pragma once
#include "unitysdk/unitysdk.h"

namespace SQLite
{
	inline static constexpr unsigned int NotifyTableChangedAction_TypeDefinitionIndex = 36223;

	enum class NotifyTableChangedAction : ::System::Int32
	{
		Insert = 0,
		Update = 1,
		Delete = 2,
	};
}
