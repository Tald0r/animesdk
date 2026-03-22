#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8_1.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SHAREICONDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA3613C0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SHAREICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3607A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController_ShareIconData_TypeDefinitionIndex = 43265;

	class UIFriendChatSpecialWidgetController_ShareIconData : public ::System::Object
	{
	public:
		::System::Boolean isUpItem; // 0x10
		::System::Int32 index; // 0x14
		::System::Int32 count; // 0x18
		::System::Int32 itemID; // 0x1C
		::Enum_3_5EA2B17DF83E32C8_1 type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SHAREICONDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ShareIconData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER_SHAREICONDATA_COMPARETO_OFFSET))(this, other);
		}
	};
}
