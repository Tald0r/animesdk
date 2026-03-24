#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralPopUpArrowWidgetController_ArrowPosition.h"

#define MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD578ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPopUpArrowWidgetContext_TypeDefinitionIndex = 54228;

	class UIGeneralPopUpArrowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsShowing; // 0x28
		::MoleMole::UIGeneralPopUpArrowWidgetController_ArrowPosition Position; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPOPUPARROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
