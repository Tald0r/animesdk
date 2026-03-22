#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTSODATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xF171020)

namespace MoleMole::Config::EffectPattern
{
	inline static constexpr unsigned int MonoEffectSoDataBase_TypeDefinitionIndex = 42895;

	class MonoEffectSoDataBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERN_MONOEFFECTSODATABASE__CTOR_OFFSET))(this);
		}
	};
}
