#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2D44E0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2D4480)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x648AD00)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x648ADC0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int IdleAnimationTaskInstanceData_TypeDefinitionIndex = 67897;

	struct alignas(4) IdleAnimationTaskInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(IdleAnimationTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xE830);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(IdleAnimationTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xE834);
		}
		::System::Int32 montageHandler; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
