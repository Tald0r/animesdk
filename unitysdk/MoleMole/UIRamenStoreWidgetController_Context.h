#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_FD161B8AFE00CB2F;

#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB268170)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreWidgetController_Context_TypeDefinitionIndex = 37022;

	class UIRamenStoreWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_FD161B8AFE00CB2F* storeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
