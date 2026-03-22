#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_89D7FAFCE6B7DF8D;
class Class_3_920D00A4D2C57DD8_2;
namespace MoleMole { class UIFriendChatConversationWidgetController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD551550)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS22_0__INITSHARESELFFORUMPOSTUIVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xD551560)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS22_0__INITSHARESELFFORUMPOSTUIVIEW_B__1_OFFSET UNITYSDK_OFFSET(0xD551970)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS22_0__INITSHARESELFFORUMPOSTUIVIEW_B__2_OFFSET UNITYSDK_OFFSET(0xD551B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatConversationWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 57926;

	class UIFriendChatConversationWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action_5<::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::Class_2_89D7FAFCE6B7DF8D*>* __9__2; // 0x10
		::UnityEngine::Events::UnityAction* __9__1; // 0x18
		::Class_3_920D00A4D2C57DD8_2* forumPost; // 0x20
		::MoleMole::UIFriendChatConversationWidgetController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitShareSelfForumPostUIView_b__0(::System::String* postTitle, ::System::Boolean isAvailable, ::System::String* availableBtnText, ::System::String* bgImgPath, ::Class_2_89D7FAFCE6B7DF8D* postdata)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::Class_2_89D7FAFCE6B7DF8D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS22_0__INITSHARESELFFORUMPOSTUIVIEW_B__0_OFFSET))(this, postTitle, isAvailable, availableBtnText, bgImgPath, postdata);
		}

		::System::Void _InitShareSelfForumPostUIView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS22_0__INITSHARESELFFORUMPOSTUIVIEW_B__1_OFFSET))(this);
		}

		::System::Void _InitShareSelfForumPostUIView_b__2(::System::String* _, ::System::Boolean isStillAvailable, ::System::String* __, ::System::String* ___, ::Class_2_89D7FAFCE6B7DF8D* postdata2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::Class_2_89D7FAFCE6B7DF8D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS22_0__INITSHARESELFFORUMPOSTUIVIEW_B__2_OFFSET))(this, _, isStillAvailable, __, ___, postdata2);
		}
	};
}
