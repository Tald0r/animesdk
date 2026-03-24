#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ETHEREYESINTERACTABLEVARIATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC2403C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesInteractableVariationConfig_TypeDefinitionIndex = 76764;

	class EtherEyesInteractableVariationConfig : public ::System::Object
	{
	public:
		::System::Single particleScaleFactor; // 0x10
		::System::Single particleAmountFactor; // 0x14
		::System::Single normalParticleAmountFactor; // 0x18
		::System::Single normalParticleScaleFactor; // 0x1C
		::System::Single materialTilingFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ETHEREYESINTERACTABLEVARIATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
