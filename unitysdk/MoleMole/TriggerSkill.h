#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_B9D5951434CC70FD;
class Class_3_BD1C1745FBC83F51;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_TRIGGERSKILL_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC7F6020)
#define MOLEMOLE_TRIGGERSKILL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC7F6360)
#define MOLEMOLE_TRIGGERSKILL_UPDATESKILLINFO_OFFSET UNITYSDK_OFFSET(0xC7F6610)
#define MOLEMOLE_TRIGGERSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F66A0)
#define MOLEMOLE_TRIGGERSKILL___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xC7F66E0)
#define MOLEMOLE_TRIGGERSKILL___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC7F6770)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerSkill_TypeDefinitionIndex = 37831;

	class TriggerSkill : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* sharedOwnerEntity; // 0x58
		::Class_3_B9D5951434CC70FD* _skillComponent; // 0x60
		::MoleMole::Battle::Entity* _ownerEntity; // 0x68
		::Class_3_F33F9DC5F4112336* _animatorComponent; // 0x70
		::Class_3_BD1C1745FBC83F51* _localInputComponent; // 0x78
		::System::Boolean forceTriggerSkill; // 0x80
		::System::Boolean forceUpdateCD; // 0x81
		::System::Int32 skillBtnIndex; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERSKILL__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERSKILL_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERSKILL_ONUPDATE_OFFSET))(this);
		}

		::System::Void UpdateSkillInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERSKILL_UPDATESKILLINFO_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERSKILL___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERSKILL___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
