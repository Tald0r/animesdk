#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_24.h"
#include "unitysdk/System/Object.h"

class Class_3_CE3642B3ECB61D27_5;
namespace MoleMole { class UIFriendChatConversationWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD056720)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITINVITEUIVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xD056730)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITINVITEUIVIEW_B__1_OFFSET UNITYSDK_OFFSET(0xD056930)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITINVITEUIVIEW_B__2_OFFSET UNITYSDK_OFFSET(0xD056BB0)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITINVITEUIVIEW_B__3_OFFSET UNITYSDK_OFFSET(0xD056B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatConversationWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 57927;

	class UIFriendChatConversationWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIFriendChatConversationWidgetController* __4__this; // 0x18
		::Class_3_CE3642B3ECB61D27_5* joinGameContent; // 0x20
		::System::Action_1<::System::Int32>* __9__2; // 0x28
		::System::Action_1<::Enum_3_0A3761FE34514D6C_24>* __9__3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITINVITEUIVIEW_B__0_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITINVITEUIVIEW_B__1_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__3(::Enum_3_0A3761FE34514D6C_24 currState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_24))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITINVITEUIVIEW_B__3_OFFSET))(this, currState);
		}

		::System::Void _InitInviteUIView_b__2(::System::Int32 retCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS8_0__INITINVITEUIVIEW_B__2_OFFSET))(this, retCode);
		}
	};
}
