#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_170;

#define MOLEMOLE_CONFIG_SPACEEFFECTBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C3E40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpaceEffectBaseConfig_TypeDefinitionIndex = 72718;

	class SpaceEffectBaseConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPACEEFFECTBASECONFIG__CTOR_OFFSET))(this);
		}
	};
}
