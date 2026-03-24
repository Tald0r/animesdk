#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EItemType.h"

class Class_1_FD161B8AFE00CB2F;

#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9AC61E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopBlacksmithWidgetContext_TypeDefinitionIndex = 65734;

	class UIWorkshopBlacksmithWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_FD161B8AFE00CB2F* storeData; // 0x28
		::Share::EItemType ShowItemType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
