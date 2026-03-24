#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemPredicate.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYAND_PREDICATE_OFFSET UNITYSDK_OFFSET(0x10AA4FB0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYAND__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA5080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicateByAnd_TypeDefinitionIndex = 63711;

	class ConfigSurfGameItemPredicateByAnd : public ::MoleMole::Config::ConfigSurfGameItemPredicate
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemPredicate*>* Predicates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYAND__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATEBYAND_PREDICATE_OFFSET))(this);
		}
	};
}
