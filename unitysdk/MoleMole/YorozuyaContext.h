#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A843FEC42C53F62F.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7BEE7A0)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaContext_TypeDefinitionIndex = 42269;

	class YorozuyaContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectQuestID; // 0x28
		::System::Boolean isAutoOpen; // 0x2C
		::Enum_3_A843FEC42C53F62F showActivityType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
