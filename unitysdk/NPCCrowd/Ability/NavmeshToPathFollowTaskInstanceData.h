#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2CBEE0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2CBE80)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x60A6960)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x60A6A20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowTaskInstanceData_TypeDefinitionIndex = 60174;

	struct alignas(1) NavmeshToPathFollowTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(NavmeshToPathFollowTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDBE0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(NavmeshToPathFollowTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDBE4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
