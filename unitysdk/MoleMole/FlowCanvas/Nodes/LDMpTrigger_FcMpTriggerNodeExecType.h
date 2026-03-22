#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpTrigger_FcMpTriggerNodeExecType_TypeDefinitionIndex = 46396;

	enum class LDMpTrigger_FcMpTriggerNodeExecType : ::System::Int32
	{
		FcCallAllTriggerStay = 3,
		FcCallTriggerExit = 2,
		FcCallTriggerEnter = 1,
		FcCallDelayEntry = 4,
		None = 0,
	};
}
