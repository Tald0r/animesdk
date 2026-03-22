#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSENTRANCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D5BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssEntranceContext_TypeDefinitionIndex = 67445;

	class UIAbyssEntranceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 EntranceID; // 0x28
		::System::Int32 CurrQuestID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSENTRANCECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
