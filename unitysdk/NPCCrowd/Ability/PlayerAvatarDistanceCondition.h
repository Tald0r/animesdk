#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class PlayerAvatarDistanceConditionVirtualProxy; }

#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0xA10A100)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x37B720)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x37B6B0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x37B710)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0xA10A000)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x37B640)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA10A270)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PlayerAvatarDistanceCondition_TypeDefinitionIndex = 70318;

	struct alignas(4) PlayerAvatarDistanceCondition
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PlayerAvatarDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x102C0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerAvatarDistanceCondition_TypeDefinitionIndex)->GetStaticField(0x102C4);
		}
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::System::Boolean greater; // 0x34
		::System::Single distance; // 0x38
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandler; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> playerTransformHandler; // 0x44

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::PlayerAvatarDistanceConditionVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceConditionVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::PlayerAvatarDistanceCondition Create()
		{
			return ((::NPCCrowd::Ability::PlayerAvatarDistanceCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITION_CREATE_OFFSET))();
		}
	};
}
