#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15AA05B440B92ECB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
namespace MoleMole { class UIHollowWaterFlowWidgetController; }

#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x81F5A00)
#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x81F59F0)
#define MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x81F5AA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FlappyBirdGameplayConfig_TypeDefinitionIndex = 54053;

	class FlappyBirdGameplayConfig : public ::System::Object
	{
	public:
		::System::Single MinSpeed; // 0x10
		::System::Single InitialPoint; // 0x14
		::System::Single Gravity; // 0x18
		::System::Boolean NonNegativeBeforeClickMode; // 0x1C
		::System::Single NormalizedTargetRange; // 0x20
		::System::Single ClickAcceleration; // 0x24
		::System::Single LosePointSpeed; // 0x28
		::System::Single MaxSpeed; // 0x2C
		::System::Single GainPointSpeed; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_15AA05B440B92ECB get_GameplayType()
		{
			return ((::Enum_3_15AA05B440B92ECB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_GET_GAMEPLAYTYPE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_360* Create(::MoleMole::UIHollowWaterFlowWidgetController* controller)
		{
			return ((::Class_0_16E4307DCC419505_360*(*)(::PVOID, ::MoleMole::UIHollowWaterFlowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FLAPPYBIRDGAMEPLAYCONFIG_CREATE_OFFSET))(this, controller);
		}
	};
}
