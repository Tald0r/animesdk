#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/EnemyWaveInformTemplate.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_45.h"

class Class_0_16E4307DCC419505_13;

#define MOLEMOLE_PROJECT_CONFIG_ENEMYWAVEINFORMTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E10B10)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int EnemyWaveInformTemplateExt_TypeDefinitionIndex = 10291;

	class EnemyWaveInformTemplateExt : public ::MoleMole::FlatBuffers::Config::EnemyWaveInformTemplate
	{
	public:
		::System::Void _ctor(::Struct_2_58DF5669875F2C66_45 data, ::Class_0_16E4307DCC419505_13* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_45, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_ENEMYWAVEINFORMTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}
	};
}
