#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F152DBF108B0858_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_A48B3771FE1DF659;
class Class_1_BE6BF7909AD9D940;
class Class_2_DF2C726EEEEC912D;

#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_CHATTYPE_OFFSET UNITYSDK_OFFSET(0xDFA8BC0)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0xDFA8C00)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_INFO_OFFSET UNITYSDK_OFFSET(0xDFA8BE0)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_CHATTYPE_OFFSET UNITYSDK_OFFSET(0xDFA8BD0)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_CIRCLEDATA_OFFSET UNITYSDK_OFFSET(0xDFA8C10)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_INFO_OFFSET UNITYSDK_OFFSET(0xDFA8BF0)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xDFA8C30)
#define MOLEMOLE_UIFRIENDCHATITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xDFA8C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatItemContext_TypeDefinitionIndex = 69919;

	class UIFriendChatItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DF2C726EEEEC912D* _circleData_k__BackingField; // 0x28
		::Class_1_BE6BF7909AD9D940* _info_k__BackingField; // 0x30
		::Enum_3_5F152DBF108B0858_1 _chatType_k__BackingField; // 0x38

		::System::Void _ctor(::Class_1_BE6BF7909AD9D940* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT__CTOR_OFFSET))(this, info);
		}

		::System::Void _ctor_1(::Class_1_A48B3771FE1DF659* circleData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A48B3771FE1DF659*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT__CTOR_1_OFFSET))(this, circleData);
		}

		::Enum_3_5F152DBF108B0858_1 get_chatType()
		{
			return ((::Enum_3_5F152DBF108B0858_1(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_CHATTYPE_OFFSET))(this);
		}

		::System::Void set_chatType(::Enum_3_5F152DBF108B0858_1 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5F152DBF108B0858_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_CHATTYPE_OFFSET))(this, value);
		}

		::Class_1_BE6BF7909AD9D940* get_info()
		{
			return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_INFO_OFFSET))(this);
		}

		::System::Void set_info(::Class_1_BE6BF7909AD9D940* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_INFO_OFFSET))(this, value);
		}

		::Class_2_DF2C726EEEEC912D* get_circleData()
		{
			return ((::Class_2_DF2C726EEEEC912D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_GET_CIRCLEDATA_OFFSET))(this);
		}

		::System::Void set_circleData(::Class_2_DF2C726EEEEC912D* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DF2C726EEEEC912D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMCONTEXT_SET_CIRCLEDATA_OFFSET))(this, value);
		}
	};
}
