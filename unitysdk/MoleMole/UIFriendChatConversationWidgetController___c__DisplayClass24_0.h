#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_89D7FAFCE6B7DF8D;
class Class_3_48C7D152812F0173;
class Class_3_920D00A4D2C57DD8_2;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }

#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA90C500)
#define MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS24_0__PROCESSFORUMPOSTDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA90C510)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatConversationWidgetController___c__DisplayClass24_0_TypeDefinitionIndex = 57929;

	class UIFriendChatConversationWidgetController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::Class_3_920D00A4D2C57DD8_2* forumPost; // 0x10
		::System::Action_5<::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::Class_2_89D7FAFCE6B7DF8D*>* onSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessForumPostData_b__0(::Class_3_48C7D152812F0173* postData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48C7D152812F0173*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCONVERSATIONWIDGETCONTROLLER___C__DISPLAYCLASS24_0__PROCESSFORUMPOSTDATA_B__0_OFFSET))(this, postData);
		}
	};
}
