#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

#define MOLEMOLE_UIINLEVELFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8940890)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelFriendCardContext_TypeDefinitionIndex = 49714;

	class UIInLevelFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::System::Boolean isFakePlayer; // 0x58
		::System::Boolean isMainPlayer; // 0x59
		::System::UInt32 teamIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
