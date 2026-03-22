#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA83E1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyMainLevelPageController_Context_TypeDefinitionIndex = 36750;

	class UIMonsterFantasyMainLevelPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsChallengePage; // 0x28
		::System::Int32 ReturnToLevelId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYMAINLEVELPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
