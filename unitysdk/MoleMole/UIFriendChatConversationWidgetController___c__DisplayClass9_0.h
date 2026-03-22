#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D9D04A98E641E52F;
class Class_3_F92F6A6188E34427;

#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD056C90)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__DEALJOINABLEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0xD056CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatConversationWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 57933;

	class UIFriendChatConversationWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Class_3_D9D04A98E641E52F* inviteRequst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DealJoinableRequest_b__0(::Class_3_F92F6A6188E34427* invite)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F92F6A6188E34427*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS9_0__DEALJOINABLEREQUEST_B__0_OFFSET))(this, invite);
		}
	};
}
