#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/TargetValueModifyFunc.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/SetTargetValue_SelectTargeting.h"
#include "unitysdk/MoleMole/TargetValueType.h"

class Class_3_3A6272A02DE7F4E0;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SETTARGETVALUE_COLLECTTARGETENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x8B76D60)
#define MOLEMOLE_SETTARGETVALUE_FINDALLALLIEDENTITY_OFFSET UNITYSDK_OFFSET(0x8B76340)
#define MOLEMOLE_SETTARGETVALUE_FINDALLENEMYENTITY_OFFSET UNITYSDK_OFFSET(0x8B764E0)
#define MOLEMOLE_SETTARGETVALUE_FINDALLNEUTRALENTITY_OFFSET UNITYSDK_OFFSET(0x8B76680)
#define MOLEMOLE_SETTARGETVALUE_FINDALLSELECTTARGET_OFFSET UNITYSDK_OFFSET(0x8B76AF0)
#define MOLEMOLE_SETTARGETVALUE_FINDLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x8B76830)
#define MOLEMOLE_SETTARGETVALUE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8B75AC0)
#define MOLEMOLE_SETTARGETVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8B75CB0)
#define MOLEMOLE_SETTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x8B76FE0)
#define MOLEMOLE_SETTARGETVALUE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x8B771E0)
#define MOLEMOLE_SETTARGETVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x8B77270)

namespace MoleMole
{
	inline static constexpr unsigned int SetTargetValue_TypeDefinitionIndex = 47133;

	class SetTargetValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* relationShipList; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* enemyEntityList; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::Class_3_3A6272A02DE7F4E0* characterBattleData; // 0x70
		::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* monsterFunctionTypeArray; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* neutralRelationShipList; // 0x80
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* alliedReleationShipList; // 0x90
		::System::Single modifyValue; // 0x98
		::MoleMole::SetTargetValue_SelectTargeting Target; // 0x9C
		::MoleMole::TargetValueType valueType; // 0xA0
		::MoleMole::Config::TargetValueModifyFunc ModifyType; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FindAllEnemyEntity(::MoleMole::Battle::Entity* owner)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE_FINDALLENEMYENTITY_OFFSET))(this, owner);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FindAllAlliedEntity(::MoleMole::Battle::Entity* owner)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE_FINDALLALLIEDENTITY_OFFSET))(this, owner);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FindAllNeutralEntity(::MoleMole::Battle::Entity* owner)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE_FINDALLNEUTRALENTITY_OFFSET))(this, owner);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FindLocalAvatar()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE_FINDLOCALAVATAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FindAllSelectTarget(::MoleMole::Battle::Entity* owner)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE_FINDALLSELECTTARGET_OFFSET))(this, owner);
		}

		::System::Void CollectTargetEntityTags(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE_COLLECTTARGETENTITYTAGS_OFFSET))(this, results);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETTARGETVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
