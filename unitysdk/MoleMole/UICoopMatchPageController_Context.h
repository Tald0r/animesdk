#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xACF8840)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchPageController_Context_TypeDefinitionIndex = 74035;

	class UICoopMatchPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
