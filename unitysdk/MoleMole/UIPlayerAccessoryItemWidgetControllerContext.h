#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPLAYERACCESSORYITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xADED0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryItemWidgetControllerContext_TypeDefinitionIndex = 49403;

	class UIPlayerAccessoryItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SheetType; // 0x28
		::System::Boolean ServerEquipped; // 0x2C
		::System::Boolean ClientEquipped; // 0x2D
		::System::Int32 ConfigID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
