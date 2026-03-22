#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/MoveToTask.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class AttractorMoveToTaskVirtualProxy; }

#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x6A00640)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FF5C0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FF550)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2FF5B0)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6A00540)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2FF490)
#define NPCCROWD_ABILITY_ATTRACTORMOVETOTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A00840)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorMoveToTask_TypeDefinitionIndex = 52264;

	struct alignas(4) AttractorMoveToTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorMoveToTask_TypeDefinitionIndex)->GetStaticField(0xC550);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorMoveToTask_TypeDefinitionIndex)->GetStaticField(0xC554);
		}
		::NPCCrowd::Ability::MoveToTask Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x60
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x68
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x70
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x78

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::AttractorMoveToTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::AttractorMoveToTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::AttractorMoveToTask Create()
		{
			return ((::NPCCrowd::Ability::AttractorMoveToTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORMOVETOTASK_CREATE_OFFSET))();
		}
	};
}
