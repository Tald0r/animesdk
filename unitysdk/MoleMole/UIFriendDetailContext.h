#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AA67334306B34AB0.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;

#define MOLEMOLE_UIFRIENDDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBF79620)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendDetailContext_TypeDefinitionIndex = 43176;

	class UIFriendDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_57F7F2BF8C55D6B6* info; // 0x28
		::Enum_3_AA67334306B34AB0 DisplayType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
