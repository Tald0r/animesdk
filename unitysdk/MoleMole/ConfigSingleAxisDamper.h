#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseConfigEnvironmentFeatureModifier.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"

#define MOLEMOLE_CONFIGSINGLEAXISDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A2940)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigSingleAxisDamper_TypeDefinitionIndex = 73803;

	class ConfigSingleAxisDamper : public ::MoleMole::BaseConfigEnvironmentFeatureModifier
	{
	public:
		::MoleMole::Battle::ProceduralAnimDamperParam DamperParams; // 0x18
		::System::Single RefRootMotionVelocityRatio; // 0x28
		::System::Single RefRootMotionVelocityMagnitude; // 0x2C
		::MoleMole::Interaction::AxisSign LocalAxis; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSINGLEAXISDAMPER__CTOR_OFFSET))(this);
		}
	};
}
