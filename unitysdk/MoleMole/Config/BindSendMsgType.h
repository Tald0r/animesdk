#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BindSendMsgType_TypeDefinitionIndex = 38550;

	enum class BindSendMsgType : ::System::Int32
	{
		OnComplete = 3,
		OnTrigger = 2,
		OnPressDown = 1,
		None = 0,
	};
}
