#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYBLINDBOXREPORTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8CBFA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxReportPopWindowController_Context_TypeDefinitionIndex = 60011;

	class UIActivityBlindBoxReportPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 StageID; // 0x28
		::System::Int32 GameID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXREPORTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
