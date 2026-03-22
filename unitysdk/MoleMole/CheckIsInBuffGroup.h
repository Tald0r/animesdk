#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

class Class_3_F41D242A20F8FE06;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKISINBUFFGROUP_ISINBUFFGROUP_OFFSET UNITYSDK_OFFSET(0x13F7F9F0)
#define MOLEMOLE_CHECKISINBUFFGROUP_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13F7F7A0)
#define MOLEMOLE_CHECKISINBUFFGROUP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13F7F980)
#define MOLEMOLE_CHECKISINBUFFGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x13F7FAB0)
#define MOLEMOLE_CHECKISINBUFFGROUP___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13F7FB00)
#define MOLEMOLE_CHECKISINBUFFGROUP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13F7FB90)

namespace MoleMole
{
	inline static constexpr unsigned int CheckIsInBuffGroup_TypeDefinitionIndex = 50596;

	class CheckIsInBuffGroup : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::Battle::Entity* _ownerEntity; // 0x50
		::Class_3_F41D242A20F8FE06* _abilityComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::Config::BuffGroupName buffGroupName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINBUFFGROUP__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINBUFFGROUP_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINBUFFGROUP_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsInBuffGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINBUFFGROUP_ISINBUFFGROUP_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINBUFFGROUP___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINBUFFGROUP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
