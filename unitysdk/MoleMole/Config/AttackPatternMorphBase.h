#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ATTACKPATTERNMORPHBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB90C730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPatternMorphBase_TypeDefinitionIndex = 50641;

	class AttackPatternMorphBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNMORPHBASE__CTOR_OFFSET))(this);
		}
	};
}
