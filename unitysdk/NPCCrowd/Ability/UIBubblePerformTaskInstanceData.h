#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x30C2F0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x30C290)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6B4E430)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B4E4F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int UIBubblePerformTaskInstanceData_TypeDefinitionIndex = 38218;

	struct alignas(4) UIBubblePerformTaskInstanceData
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(UIBubblePerformTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xEF70);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UIBubblePerformTaskInstanceData_TypeDefinitionIndex)->GetStaticField(0xEF74);
		}
		::System::Single timer; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASKINSTANCEDATA_REGISTERTYPE_OFFSET))();
		}
	};
}
