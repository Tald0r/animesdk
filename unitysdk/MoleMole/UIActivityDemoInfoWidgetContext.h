#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class ActivityWidgetContext; }

#define MOLEMOLE_UIACTIVITYDEMOINFOWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBD7F5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDemoInfoWidgetContext_TypeDefinitionIndex = 75116;

	class UIActivityDemoInfoWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ActivityWidgetContext* widgetContext; // 0x28
		::System::Int32 focusAvatarId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOINFOWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
