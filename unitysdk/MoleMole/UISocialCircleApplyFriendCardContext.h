#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendCardContext.h"

class Class_2_1E137DD457416AF2;
class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UISOCIALCIRCLEAPPLYFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA3FEEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleApplyFriendCardContext_TypeDefinitionIndex = 47760;

	class UISocialCircleApplyFriendCardContext : public ::MoleMole::UIFriendCardContext
	{
	public:
		::Class_2_1E137DD457416AF2* CircleMemberApplyData; // 0x58
		::Class_2_DF2C726EEEEC912D* CircleData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEAPPLYFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
