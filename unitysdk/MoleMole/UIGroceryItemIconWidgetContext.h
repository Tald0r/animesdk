#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_260;

#define MOLEMOLE_UIGROCERYITEMICONWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBFBD3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryItemIconWidgetContext_TypeDefinitionIndex = 70599;

	class UIGroceryItemIconWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_260* IconStyle; // 0x28

		::System::Void _ctor(::Class_0_16E4307DCC419505_260* iconStyle)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYITEMICONWIDGETCONTEXT__CTOR_OFFSET))(this, iconStyle);
		}
	};
}
