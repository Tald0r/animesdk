#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_SUIBIANTEMPLEUPGRADEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7F28140)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleUpgradeDialogContext_TypeDefinitionIndex = 50035;

	class SuibianTempleUpgradeDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Level; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEUPGRADEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
