#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AA67334306B34AB0.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_FRIENDMOREOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8B0B610)

namespace MoleMole
{
	inline static constexpr unsigned int FriendMoreOptionContext_TypeDefinitionIndex = 73931;

	class FriendMoreOptionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* overrideReportBtnAction; // 0x28
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* extraReportTypes; // 0x30
		::Class_1_BE6BF7909AD9D940* info; // 0x38
		::System::Boolean isRealPlayer; // 0x40
		::Enum_3_AA67334306B34AB0 DisplayType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRIENDMOREOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
