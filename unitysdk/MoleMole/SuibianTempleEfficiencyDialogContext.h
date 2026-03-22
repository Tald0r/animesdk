#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_472679C84451629A_19;

#define MOLEMOLE_SUIBIANTEMPLEEFFICIENCYDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8F3E750)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleEfficiencyDialogContext_TypeDefinitionIndex = 67289;

	class SuibianTempleEfficiencyDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_472679C84451629A_19* ServerProgressData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEEFFICIENCYDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
