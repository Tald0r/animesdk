#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A850FEC42C5E8043.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x73F7E90)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaContext_TypeDefinitionIndex = 50187;

	class YorozuyaContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A850FEC42C5E8043 showActivityType; // 0x28
		::System::Int32 selectQuestID; // 0x2C
		::System::Boolean isAutoOpen; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
