#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYRETURNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCB1D240)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnContext_TypeDefinitionIndex = 64573;

	class UIActivityReturnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_01618AD0437C8486 selectType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
