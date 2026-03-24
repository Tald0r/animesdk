#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8931810)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetContext_TypeDefinitionIndex = 56172;

	class UIHollowMainBottomWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Single PunishOverloadFadeOutTime; // 0x28
		::System::Boolean TopUI; // 0x2C
		::System::Boolean DontPlaySound; // 0x2D
		::System::Single StanimaValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
