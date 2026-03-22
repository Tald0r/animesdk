#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0E846B689DE3EFD2;
class Class_1_BC9D27E6028F322B;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CHATPLUSSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x9B49EA0)
#define MOLEMOLE_CHATPLUSSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x9B49E90)
#define MOLEMOLE_CHATPLUSSHOWOBJ_ONPLAYCHAT_OFFSET UNITYSDK_OFFSET(0x9B4A1F0)
#define MOLEMOLE_CHATPLUSSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x9B49F00)
#define MOLEMOLE_CHATPLUSSHOWOBJ_PLAYCHAT_OFFSET UNITYSDK_OFFSET(0x9B49F70)
#define MOLEMOLE_CHATPLUSSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x9B49EB0)

namespace MoleMole
{
	inline static constexpr unsigned int ChatPlusShowObj_TypeDefinitionIndex = 46830;

	class ChatPlusShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action_1<::Class_1_BC9D27E6028F322B*>* _onChatUIClose; // 0x28
		::System::Action_1<::Class_1_BC9D27E6028F322B*>* _finishCallback; // 0x30
		::Class_1_0E846B689DE3EFD2* _chatParams; // 0x38

		::System::Void _ctor(::Class_1_0E846B689DE3EFD2* chatParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E846B689DE3EFD2*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ__CTOR_OFFSET))(this, chatParam);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void PlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_PLAYCHAT_OFFSET))(this);
		}

		::System::Void OnPlayChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHATPLUSSHOWOBJ_ONPLAYCHAT_OFFSET))(this);
		}
	};
}
