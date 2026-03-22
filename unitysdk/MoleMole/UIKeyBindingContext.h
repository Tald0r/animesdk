#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_543B6B88E17BAFE0.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAF33950)

namespace MoleMole
{
	inline static constexpr unsigned int UIKeyBindingContext_TypeDefinitionIndex = 41103;

	class UIKeyBindingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::LogicButtonInputType ComboLogicButtonType; // 0x28
		::Enum_3_543B6B88E17BAFE0 SettingContentType; // 0x2C
		::System::Boolean IsLocked; // 0x30
		::Enum_3_A019F766F8C74696 InputDevice; // 0x34
		::MoleMole::LogicButtonInputType LogicButtonType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
