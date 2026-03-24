#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0340E479638D8801;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x10A96250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractCondition_TypeDefinitionIndex = 58234;

	class ConfigHollowInteractCondition : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITION__CTOR_OFFSET))(this);
		}
	};
}
