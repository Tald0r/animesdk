#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTBUBBLEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xDEE02F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotBubbleWidgetControllerContext_TypeDefinitionIndex = 50935;

	class UIActivityHotpotBubbleWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 BubbleIndex; // 0x28
		::System::Int32 PlayTimes; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTBUBBLEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
