#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2CBD20)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2CBCC0)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x609C050)
#define NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x609C110)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueStoppingUpdateTaskInstanceData_TypeDefinitionIndex = 61257;

	struct alignas(1) CarQueueStoppingUpdateTaskInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CarQueueStoppingUpdateTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDBB0);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CarQueueStoppingUpdateTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xDBB4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUESTOPPINGUPDATETASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
