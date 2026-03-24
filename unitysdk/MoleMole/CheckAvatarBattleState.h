#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define MOLEMOLE_CHECKAVATARBATTLESTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB382B10)
#define MOLEMOLE_CHECKAVATARBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10A7B730)
#define MOLEMOLE_CHECKAVATARBATTLESTATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10A7B770)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAvatarBattleState_TypeDefinitionIndex = 71089;

	class CheckAvatarBattleState : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARBATTLESTATE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARBATTLESTATE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARBATTLESTATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
