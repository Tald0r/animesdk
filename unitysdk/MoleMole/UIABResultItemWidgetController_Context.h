#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B4F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIABResultItemWidgetController_Context_TypeDefinitionIndex = 72196;

	class UIABResultItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CharacterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABRESULTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
