#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_RecordFlag_TypeDefinitionIndex = 62150;

	enum class UIBaseChatPlayController_RecordFlag : ::System::Int32
	{
		OnlyRecord = 1,
		OnlyProcess = 2,
		All = 0,
	};
}
