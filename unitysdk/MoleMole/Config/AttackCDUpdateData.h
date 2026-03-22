#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ATTACKCDUPDATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC33E400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackCDUpdateData_TypeDefinitionIndex = 45919;

	class AttackCDUpdateData : public ::System::Object
	{
	public:
		::System::Int32 aliveMonsterThreshold; // 0x10
		::System::Single updateSpeedMulti; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKCDUPDATEDATA__CTOR_OFFSET))(this);
		}
	};
}
