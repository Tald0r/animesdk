#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA853600)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoWidgetController_Context_TypeDefinitionIndex = 39568;

	class UIPersonalInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsOpenedAsTabPage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
