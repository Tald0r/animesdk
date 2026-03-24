#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x851C110)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustLevelRewardDialogContext_TypeDefinitionIndex = 53417;

	class UIWorkBenchTrustLevelRewardDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean AllowBack; // 0x28
		::System::Int32 PartnerID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
