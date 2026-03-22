#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYHORIZONTALSPEED_PREDICATE_OFFSET UNITYSDK_OFFSET(0x139A4130)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYHORIZONTALSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x139A42C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateByHorizontalSpeed_TypeDefinitionIndex = 52862;

	class ConfigSurfGameItemPredicateByHorizontalSpeed : public ::MoleMole::Config::ConfigSurfGameItemPredicate
	{
	public:
		::System::Single SpeedArg1; // 0x10
		::MoleMole::Config::ValueCompareType CompareType; // 0x14
		::System::Single SpeedArg2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYHORIZONTALSPEED__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYHORIZONTALSPEED_PREDICATE_OFFSET))(this);
		}
	};
}
