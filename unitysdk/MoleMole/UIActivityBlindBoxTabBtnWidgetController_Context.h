#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBLINDBOXTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE900690)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxTabBtnWidgetController_Context_TypeDefinitionIndex = 69367;

	class UIActivityBlindBoxTabBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 StageID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
