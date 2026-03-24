#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A843FEC42C53F62F.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA9AF690)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryActivityPageController_Context_TypeDefinitionIndex = 67056;

	class UIGroceryActivityPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A843FEC42C53F62F activityType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
