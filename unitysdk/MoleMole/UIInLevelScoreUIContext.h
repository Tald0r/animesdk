#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_373;

#define MOLEMOLE_UIINLEVELSCOREUICONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC092320)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelScoreUIContext_TypeDefinitionIndex = 48625;

	class UIInLevelScoreUIContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_373* newsBubbleSupport; // 0x28
		::System::Int32 GroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICONTEXT__CTOR_OFFSET))(this);
		}
	};
}
