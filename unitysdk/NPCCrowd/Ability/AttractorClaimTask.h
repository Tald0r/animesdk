#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class AttractorClaimTaskVirtualProxy; }

#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x601CD30)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C9490)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C9420)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2C9480)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x601CC30)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C93B0)
#define NPCCROWD_ABILITY_ATTRACTORCLAIMTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x601CE80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorClaimTask_TypeDefinitionIndex = 60783;

	struct alignas(4) AttractorClaimTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorClaimTask_TypeDefinitionIndex)->GetStaticField(0xF9F0);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorClaimTask_TypeDefinitionIndex)->GetStaticField(0xF9F4);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::AttractorClaimTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::AttractorClaimTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::AttractorClaimTask Create()
		{
			return ((::NPCCrowd::Ability::AttractorClaimTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCLAIMTASK_CREATE_OFFSET))();
		}
	};
}
