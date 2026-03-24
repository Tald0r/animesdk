#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E7230)

namespace MoleMole
{
	inline static constexpr unsigned int UIKeyBindingContext_TypeDefinitionIndex = 52494;

	class UIKeyBindingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_543B6B88E17BAFE0 SettingContentType; // 0x28
		::MoleMole::LogicButtonInputType ComboLogicButtonType; // 0x2C
		::MoleMole::LogicButtonInputType LogicButtonType; // 0x30
		::Enum_3_A019F766F8C74696 InputDevice; // 0x34
		::System::Boolean IsLocked; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
