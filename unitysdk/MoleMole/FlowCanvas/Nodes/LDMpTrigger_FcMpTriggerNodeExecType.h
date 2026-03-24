#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpTrigger_FcMpTriggerNodeExecType_TypeDefinitionIndex = 67817;

	enum class LDMpTrigger_FcMpTriggerNodeExecType : ::System::Int32
	{
		None = 0,
		FcCallTriggerExit = 2,
		FcCallDelayEntry = 4,
		FcCallTriggerEnter = 1,
		FcCallAllTriggerStay = 3,
	};
}
