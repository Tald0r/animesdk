#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYEXCHANGEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7F4B700)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityExchangeDialogContext_TypeDefinitionIndex = 46775;

	class UIActivityExchangeDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 ActivityID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYEXCHANGEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
