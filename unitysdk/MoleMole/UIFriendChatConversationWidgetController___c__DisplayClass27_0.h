#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60638234271CCDB8_112_Class_2_F03B0164AF5E38A9_1;
class Class_3_CE3642B3ECB61D27_34;
namespace MoleMole { class UIFriendChatConversationWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95EE4A0)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SETUPTEAMUIWITHCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0x95EE4B0)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SETUPTEAMUIWITHCONTENT_B__2_OFFSET UNITYSDK_OFFSET(0x95EE5A0)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SETUPTEAMUIWITHCONTENT_G__SETTEAMBTNASINVALID_1_OFFSET UNITYSDK_OFFSET(0x95EE870)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatConversationWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 57925;

	class UIFriendChatConversationWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendChatConversationWidgetController* __4__this; // 0x10
		::Class_2_60638234271CCDB8_112_Class_2_F03B0164AF5E38A9_1* viewWidget; // 0x18
		::System::Action_1<::Class_3_CE3642B3ECB61D27_34*>* __9__2; // 0x20
		::System::UInt32 shareDataUID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SETUPTEAMUIWITHCONTENT_B__0_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_b__2(::Class_3_CE3642B3ECB61D27_34* shareData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_CE3642B3ECB61D27_34*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SETUPTEAMUIWITHCONTENT_B__2_OFFSET))(this, shareData);
		}

		::System::Void _SetupTeamUIWithContent_g__SetTeamBtnAsInvalid_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SETUPTEAMUIWITHCONTENT_G__SETTEAMBTNASINVALID_1_OFFSET))(this);
		}
	};
}
