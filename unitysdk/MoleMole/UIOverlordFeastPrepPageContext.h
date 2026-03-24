#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTPREPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA42AAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastPrepPageContext_TypeDefinitionIndex = 51573;

	class UIOverlordFeastPrepPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TargetGameID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTPREPPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
