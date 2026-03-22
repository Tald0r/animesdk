#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendChatConversationWidgetController_ShareIconData; }

#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D75BF0)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__PROCESSGACHADATA_B__0_OFFSET UNITYSDK_OFFSET(0x9D75C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatConversationWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 57922;

	class UIFriendChatConversationWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Int32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ProcessGachaData_b__0(::MoleMole::UIFriendChatConversationWidgetController_ShareIconData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIFriendChatConversationWidgetController_ShareIconData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__PROCESSGACHADATA_B__0_OFFSET))(this, item);
		}
	};
}
