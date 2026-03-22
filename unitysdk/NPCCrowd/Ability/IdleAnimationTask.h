#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class IdleAnimationTaskVirtualProxy; }

#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x6EBBF60)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x316F60)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x316EF0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x316F50)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6EBBE60)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x316E80)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x6EBC0D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int IdleAnimationTask_TypeDefinitionIndex = 52666;

	struct alignas(4) IdleAnimationTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(IdleAnimationTask_TypeDefinitionIndex)->GetStaticField(0x11110);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(IdleAnimationTask_TypeDefinitionIndex)->GetStaticField(0x11114);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCMontageDataFragment> montageHandle; // 0x38
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::IdleAnimationTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::IdleAnimationTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::IdleAnimationTask Create()
		{
			return ((::NPCCrowd::Ability::IdleAnimationTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_CREATE_OFFSET))();
		}
	};
}
