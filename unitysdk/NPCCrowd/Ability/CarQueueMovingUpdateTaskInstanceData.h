#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2D4400)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2D43A0)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6489C30)
#define NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6489CF0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueMovingUpdateTaskInstanceData_TypeDefinitionIndex = 59173;

	struct alignas(1) CarQueueMovingUpdateTaskInstanceData
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CarQueueMovingUpdateTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xE820);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CarQueueMovingUpdateTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xE824);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEMOVINGUPDATETASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
