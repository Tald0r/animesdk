#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2CBDE0)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2CBD80)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x609C240)
#define NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x609C300)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DelayTaskInstanceData_TypeDefinitionIndex = 72083;

	struct alignas(4) DelayTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(DelayTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDBC0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DelayTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDBC4);
		}
		::System::Single timer; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
