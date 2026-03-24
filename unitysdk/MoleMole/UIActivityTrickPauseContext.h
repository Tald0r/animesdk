#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_43FC7512585ACDE5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_DF1AF84C24D8648D;
class MonoUITableScrollV2;

#define MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xDEEA430)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseContext_TypeDefinitionIndex = 69424;

	class UIActivityTrickPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_DF1AF84C24D8648D* TrickData; // 0x28
		::MonoUITableScrollV2* BindScrollView; // 0x30
		::Enum_3_43FC7512585ACDE5 ActivityTrickType; // 0x38
		::System::Int32 QuestID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
