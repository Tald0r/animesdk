#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYSUPERSTAR_PREDICATE_OFFSET UNITYSDK_OFFSET(0xE36DDA0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYSUPERSTAR__CTOR_OFFSET UNITYSDK_OFFSET(0xE36DEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateBySuperStar_TypeDefinitionIndex = 40382;

	class ConfigSurfGameItemPredicateBySuperStar : public ::MoleMole::Config::ConfigSurfGameItemPredicate
	{
	public:
		::System::Boolean IsActive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYSUPERSTAR__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYSUPERSTAR_PREDICATE_OFFSET))(this);
		}
	};
}
