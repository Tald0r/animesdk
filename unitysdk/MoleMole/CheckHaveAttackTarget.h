#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_B19369CC4AB45FA4;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKHAVEATTACKTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10A7B800)
#define MOLEMOLE_CHECKHAVEATTACKTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10A7B9E0)
#define MOLEMOLE_CHECKHAVEATTACKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x10A7BB80)
#define MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10A7BBC0)
#define MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10A7BC50)

namespace MoleMole
{
	inline static constexpr unsigned int CheckHaveAttackTarget_TypeDefinitionIndex = 60133;

	class CheckHaveAttackTarget : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x50
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::Class_3_B19369CC4AB45FA4* attackTargetComponent; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
