#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_F41D242A20F8FE06;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_SETABILITYSPECIAL_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8B75440)
#define MOLEMOLE_SETABILITYSPECIAL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8B75630)
#define MOLEMOLE_SETABILITYSPECIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x8B75960)
#define MOLEMOLE_SETABILITYSPECIAL___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8B759A0)
#define MOLEMOLE_SETABILITYSPECIAL___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8B75A30)

namespace MoleMole
{
	inline static constexpr unsigned int SetAbilitySpecial_TypeDefinitionIndex = 75734;

	class SetAbilitySpecial : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* TargetAbilitySpecial; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* TargetAbilitySpecialValue; // 0x60
		::Class_3_F41D242A20F8FE06* _abilityComponent; // 0x68
		::System::String* SourceAbilityName; // 0x70
		::System::String* TargetAbilityName; // 0x78
		::MoleMole::Battle::Entity* ownerEntity; // 0x80
		::System::String* SourceAbilitySpecial; // 0x88
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x90
		::System::Boolean IsRefreshProperty; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
