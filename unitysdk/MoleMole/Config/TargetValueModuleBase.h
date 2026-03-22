#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C0D5B1A036ED00F0;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_TARGETVALUEMODULEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x6DFA0A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TargetValueModuleBase_TypeDefinitionIndex = 43582;

	class TargetValueModuleBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TARGETVALUEMODULEBASE__CTOR_OFFSET))(this);
		}
	};
}
