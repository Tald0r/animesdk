#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;
namespace MoleMole { class UIFriendChatConversationWidgetController; }

#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D75C20)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS55_0__INITCIRCLEPLAYERINFOUIVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x9D75C30)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS55_0__INITCIRCLEPLAYERINFOUIVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x9D76420)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatConversationWidgetController___c__DisplayClass55_0_TypeDefinitionIndex = 57924;

	class UIFriendChatConversationWidgetController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendChatConversationWidgetController* __4__this; // 0x10
		::Class_2_DF2C726EEEEC912D* circleData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitCirclePlayerInfoUIView_b__0(::Class_1_57F7F2BF8C55D6B6* selfSys)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS55_0__INITCIRCLEPLAYERINFOUIVIEW_B__0_OFFSET))(this, selfSys);
		}

		::System::Boolean _InitCirclePlayerInfoUIView_b__1(::Class_2_D02DABCF41CDA271* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_D02DABCF41CDA271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS55_0__INITCIRCLEPLAYERINFOUIVIEW_B__1_OFFSET))(this, member);
		}
	};
}
