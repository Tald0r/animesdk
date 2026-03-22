#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7845F1877518E0E8_Enum_3_D311A4070E6E7A7A.h"
#include "unitysdk/Enum_3_AA67334306B34AB0.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_BE6BF7909AD9D940;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA2660)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardContext_TypeDefinitionIndex = 43555;

	class UIFriendCardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* info; // 0x28
		::System::Action_1<::Class_1_BE6BF7909AD9D940*>* onClickSendMessage; // 0x30
		::NodeGraph::VariantUnion subKey; // 0x38
		::Class_1_7845F1877518E0E8_Enum_3_D311A4070E6E7A7A FromModule; // 0x48
		::Enum_3_AA67334306B34AB0 DisplayTag; // 0x4C
		::System::Boolean isShowingPlatform; // 0x50
		::Share::ENotificationBadgeType notificationBadgeType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
