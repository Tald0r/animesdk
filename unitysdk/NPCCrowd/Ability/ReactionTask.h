#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class ReactionTaskVirtualProxy; }

#define NPCCROWD_ABILITY_REACTIONTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x7645830)
#define NPCCROWD_ABILITY_REACTIONTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3299B0)
#define NPCCROWD_ABILITY_REACTIONTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x329940)
#define NPCCROWD_ABILITY_REACTIONTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_REACTIONTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x3299A0)
#define NPCCROWD_ABILITY_REACTIONTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7645730)
#define NPCCROWD_ABILITY_REACTIONTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x3298D0)
#define NPCCROWD_ABILITY_REACTIONTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x7645990)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ReactionTask_TypeDefinitionIndex = 48985;

	struct alignas(4) ReactionTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(ReactionTask_TypeDefinitionIndex)->GetStaticField(0xCF70);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ReactionTask_TypeDefinitionIndex)->GetStaticField(0xCF74);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::ReactionTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::ReactionTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::ReactionTask Create()
		{
			return ((::NPCCrowd::Ability::ReactionTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_CREATE_OFFSET))();
		}
	};
}
