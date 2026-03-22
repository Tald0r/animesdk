#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPROLESELECTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC0DA150)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopRoleSelectWidgetController_Context_TypeDefinitionIndex = 38611;

	class UICoopRoleSelectWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROLESELECTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
