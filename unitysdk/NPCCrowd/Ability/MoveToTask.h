#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/MoveType.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class MoveToTaskVirtualProxy; }

#define NPCCROWD_ABILITY_MOVETOTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x601DB20)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C9780)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C9710)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_MOVETOTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2C9770)
#define NPCCROWD_ABILITY_MOVETOTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x601DA20)
#define NPCCROWD_ABILITY_MOVETOTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C96A0)
#define NPCCROWD_ABILITY_MOVETOTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x601DCA0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int MoveToTask_TypeDefinitionIndex = 45244;

	struct alignas(4) MoveToTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MoveToTask_TypeDefinitionIndex)->GetStaticField(0xFA20);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(MoveToTask_TypeDefinitionIndex)->GetStaticField(0xFA24);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::UnityEngine::Vector3 targetPosition; // 0x30
		::NPCCrowd::Ability::MoveType moveType; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x40
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmeshHandle; // 0x48
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x50
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x58

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::MoveToTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::MoveToTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::MoveToTask Create()
		{
			return ((::NPCCrowd::Ability::MoveToTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_MOVETOTASK_CREATE_OFFSET))();
		}
	};
}
