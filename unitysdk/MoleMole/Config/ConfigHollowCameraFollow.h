#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowCameraAvoidObstacle; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x918AB20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraFollow_TypeDefinitionIndex = 73490;

	class ConfigHollowCameraFollow : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraAvoidObstacle* ConfigAvoidObstacle; // 0x10
		::MoleMole::Battle::ProceduralAnimDamperParam DamperParams; // 0x18
		::System::Boolean PlayerAvoidJoystick; // 0x28
		::System::Boolean UseDynamicZ; // 0x29
		::System::Single DistToTargetZ; // 0x2C
		::System::Single ScreenRatio; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAFOLLOW__CTOR_OFFSET))(this);
		}
	};
}
