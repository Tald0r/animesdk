#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBackFlowContext.h"

#define MOLEMOLE_UIACTIVITYTRIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD3CA010)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrialContext_TypeDefinitionIndex = 66857;

	class UIActivityTrialContext : public ::MoleMole::UIBackFlowContext
	{
	public:
		::System::Int32 DefaultSelectRoleIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
