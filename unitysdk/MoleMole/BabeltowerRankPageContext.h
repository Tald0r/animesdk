#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_BABELTOWERRANKPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB43E8D0)

namespace MoleMole
{
	inline static constexpr unsigned int BabeltowerRankPageContext_TypeDefinitionIndex = 53820;

	class BabeltowerRankPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 totalMvpCount; // 0x28
		::System::Int32 towerid; // 0x2C
		::System::Int32 mvpCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERRANKPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
