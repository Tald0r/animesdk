#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVOIDFRONTENDINGCOLLECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7914E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontEndingCollectPageContext_TypeDefinitionIndex = 44570;

	class UIVoidFrontEndingCollectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean OnlyShowMedalBtn; // 0x28
		::System::Int32 EntranceId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTENDINGCOLLECTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
