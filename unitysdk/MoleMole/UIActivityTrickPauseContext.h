#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8F3BE532744338E2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_DF1AF84C24D8648D;
class MonoUITableScrollV2;

#define MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD3CA020)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseContext_TypeDefinitionIndex = 62010;

	class UIActivityTrickPauseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MonoUITableScrollV2* BindScrollView; // 0x28
		::Class_1_DF1AF84C24D8648D* TrickData; // 0x30
		::System::Int32 QuestID; // 0x38
		::Enum_3_8F3BE532744338E2 ActivityTrickType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
