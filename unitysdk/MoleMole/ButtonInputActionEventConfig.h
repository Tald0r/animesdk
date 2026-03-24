#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E4BEBE5C8511EA11.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_BUTTONINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x9B95C80)
#define MOLEMOLE_BUTTONINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9B95C90)

namespace MoleMole
{
	inline static constexpr unsigned int ButtonInputActionEventConfig_TypeDefinitionIndex = 80753;

	class ButtonInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Boolean IgnoreCursorHide; // 0x18
		::System::Boolean handleAllPressTypes; // 0x19
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x1C
		::MoleMole::ButtonPressType pressType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_E4BEBE5C8511EA11 get_dataType()
		{
			return ((::Enum_3_E4BEBE5C8511EA11(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUTTONINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
