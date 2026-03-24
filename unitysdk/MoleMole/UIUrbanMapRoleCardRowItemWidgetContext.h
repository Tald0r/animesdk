#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIURBANMAPROLECARDROWITEMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA121F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRoleCardRowItemWidgetContext_TypeDefinitionIndex = 46055;

	class UIUrbanMapRoleCardRowItemWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Icon; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPROLECARDROWITEMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
