#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_07824EC7A4EBA6CE_Enum_3_D1D49B5EF8F4C317.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D2750)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusCollectWidgetController_Context_TypeDefinitionIndex = 42822;

	class UIVirusCollectWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_07824EC7A4EBA6CE_Enum_3_D1D49B5EF8F4C317 levelType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSCOLLECTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
