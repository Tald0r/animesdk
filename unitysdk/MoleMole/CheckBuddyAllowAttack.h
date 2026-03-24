#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CHECKBUDDYALLOWATTACK_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xACAD4C0)
#define MOLEMOLE_CHECKBUDDYALLOWATTACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xACAD220)
#define MOLEMOLE_CHECKBUDDYALLOWATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xACAD660)
#define MOLEMOLE_CHECKBUDDYALLOWATTACK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xACAD6B0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckBuddyAllowAttack_TypeDefinitionIndex = 68083;

	class CheckBuddyAllowAttack : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::String* ExtraTargetSharedValName; // 0x50
		::System::String* TargetSharedValName; // 0x58
		::System::Boolean UseExtraCondition; // 0x60
		::System::Int32 ExtraTargetSharedValValue; // 0x64
		::System::Int32 TargetSharedValValue; // 0x68
		::System::Int32 CheckNum; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYALLOWATTACK__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYALLOWATTACK_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean CheckCondition(::MoleMole::Battle::Entity* buddy, ::System::String* sharedValName, ::System::Int32 sharedValValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYALLOWATTACK_CHECKCONDITION_OFFSET))(this, buddy, sharedValName, sharedValValue);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBUDDYALLOWATTACK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
