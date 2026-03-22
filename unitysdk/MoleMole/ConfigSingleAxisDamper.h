#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseConfigEnvironmentFeatureModifier.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"

#define MOLEMOLE_CONFIGSINGLEAXISDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED5DC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigSingleAxisDamper_TypeDefinitionIndex = 49835;

	class ConfigSingleAxisDamper : public ::MoleMole::BaseConfigEnvironmentFeatureModifier
	{
	public:
		::MoleMole::Interaction::AxisSign LocalAxis; // 0x18
		::MoleMole::Battle::ProceduralAnimDamperParam DamperParams; // 0x1C
		::System::Single RefRootMotionVelocityMagnitude; // 0x2C
		::System::Single RefRootMotionVelocityRatio; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSINGLEAXISDAMPER__CTOR_OFFSET))(this);
		}
	};
}
