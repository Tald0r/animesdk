#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_FD161B8AFE00CB2F;

#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F16C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGoldenWeekV2WidgetController_Context_TypeDefinitionIndex = 78647;

	class UIActivityGoldenWeekV2WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_FD161B8AFE00CB2F* storeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
