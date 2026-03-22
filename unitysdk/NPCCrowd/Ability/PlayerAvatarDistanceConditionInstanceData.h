#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FFDF0)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FFD90)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6A01920)
#define NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A019E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PlayerAvatarDistanceConditionInstanceData_TypeDefinitionIndex = 78480;

	struct alignas(1) PlayerAvatarDistanceConditionInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerAvatarDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xC590);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(PlayerAvatarDistanceConditionInstanceData_TypeDefinitionIndex)->GetStaticField(0xC594);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PLAYERAVATARDISTANCECONDITIONINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
