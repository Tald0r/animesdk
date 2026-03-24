#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/FollowerMove_FORWARD_TYPE.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FOLLOWERMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xD0DE3F0)
#define MOLEMOLE_FOLLOWERMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD0DE520)
#define MOLEMOLE_FOLLOWERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0DE580)
#define MOLEMOLE_FOLLOWERMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xD0DE5F0)
#define MOLEMOLE_FOLLOWERMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD0DE680)

namespace MoleMole
{
	inline static constexpr unsigned int FollowerMove_TypeDefinitionIndex = 78816;

	class FollowerMove : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::System::Single posLerpRatio; // 0x68
		::MoleMole::FollowerMove_FORWARD_TYPE ForwardType; // 0x6C
		::System::Single aimHeightOffset; // 0x70
		::System::Single forwardLerpRatio; // 0x74
		::UnityEngine::Vector3 PosOffset; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERMOVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
