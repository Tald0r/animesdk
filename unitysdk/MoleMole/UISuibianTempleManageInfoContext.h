#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3384FC764485EA3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9369D10)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoContext_TypeDefinitionIndex = 46625;

	class UISuibianTempleManageInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 GoodShelveID; // 0x28
		::Enum_3_D3384FC764485EA3 OpenType; // 0x2C
		::System::Int32 InitSelectProductID; // 0x30
		::System::Boolean FromJump; // 0x34
		::System::UInt32 CraftBenchID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
