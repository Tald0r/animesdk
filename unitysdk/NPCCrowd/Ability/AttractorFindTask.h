#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class AttractorFindTaskVirtualProxy; }

#define NPCCROWD_ABILITY_ATTRACTORFINDTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x609BDB0)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2CBC60)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2CBBF0)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2CBC50)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x609BCB0)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2CBB80)
#define NPCCROWD_ABILITY_ATTRACTORFINDTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x609BF20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorFindTask_TypeDefinitionIndex = 61127;

	struct alignas(4) AttractorFindTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorFindTask_TypeDefinitionIndex)->GetStaticField(0xDBA0);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorFindTask_TypeDefinitionIndex)->GetStaticField(0xDBA4);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::System::Single delayTime; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x3C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::AttractorFindTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::AttractorFindTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::AttractorFindTask Create()
		{
			return ((::NPCCrowd::Ability::AttractorFindTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORFINDTASK_CREATE_OFFSET))();
		}
	};
}
