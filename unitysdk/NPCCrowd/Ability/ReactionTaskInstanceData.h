#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_REACTIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C9970)
#define NPCCROWD_ABILITY_REACTIONTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C9910)
#define NPCCROWD_ABILITY_REACTIONTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6022740)
#define NPCCROWD_ABILITY_REACTIONTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6022800)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ReactionTaskInstanceData_TypeDefinitionIndex = 47659;

	struct alignas(1) ReactionTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(ReactionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xFA40);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ReactionTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xFA44);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
