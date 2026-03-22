#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E4BEBE5C8511EA11.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xA606960)
#define MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA606970)

namespace MoleMole
{
	inline static constexpr unsigned int MouseButtonClickInputActionEventConfig_TypeDefinitionIndex = 36987;

	class MouseButtonClickInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Single clickTimeThreshold; // 0x18
		::System::Single moveDistanceThreshold; // 0x1C
		::MoleMole::LogicButtonInputType logicButtonInputType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_E4BEBE5C8511EA11 get_dataType()
		{
			return ((::Enum_3_E4BEBE5C8511EA11(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOUSEBUTTONCLICKINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
