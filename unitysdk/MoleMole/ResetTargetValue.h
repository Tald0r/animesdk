#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_RESETTARGETVALUE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x9852690)
#define MOLEMOLE_RESETTARGETVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x98527C0)
#define MOLEMOLE_RESETTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x98529A0)
#define MOLEMOLE_RESETTARGETVALUE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x98529E0)
#define MOLEMOLE_RESETTARGETVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9852A70)

namespace MoleMole
{
	inline static constexpr unsigned int ResetTargetValue_TypeDefinitionIndex = 52375;

	class ResetTargetValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::System::Boolean ResetSelectTargetValues; // 0x68
		::System::Boolean ResetAttackerTargetValues; // 0x69
		::System::Boolean ResetAllDynamicTargetValues; // 0x6A
		::System::Boolean ResetInRangeTargetValue; // 0x6B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETTARGETVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETTARGETVALUE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETTARGETVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETTARGETVALUE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETTARGETVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
