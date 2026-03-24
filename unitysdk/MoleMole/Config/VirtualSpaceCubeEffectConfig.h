#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SpaceEffectBaseConfig.h"

class Class_0_16E4307DCC419505_412;

#define MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xC248BD0)
#define MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC248CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VirtualSpaceCubeEffectConfig_TypeDefinitionIndex = 63689;

	class VirtualSpaceCubeEffectConfig : public ::MoleMole::Config::SpaceEffectBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_412* CreateInstance()
		{
			return ((::Class_0_16E4307DCC419505_412*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG_CREATEINSTANCE_OFFSET))(this);
		}
	};
}
