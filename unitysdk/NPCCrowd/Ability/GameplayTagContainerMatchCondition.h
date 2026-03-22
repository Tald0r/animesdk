#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace Foundation::Unreal { class SerializableGameplayTagQuery; }
namespace NPCCrowd::Ability { class GameplayTagContainerMatchConditionInstanceDataVirtualProxy; }

#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0xA1071B0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x37B480)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x37B410)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x37B470)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0xA1070B0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x37B3A0)
#define NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA107320)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int GameplayTagContainerMatchCondition_TypeDefinitionIndex = 62282;

	struct alignas(8) GameplayTagContainerMatchCondition
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(GameplayTagContainerMatchCondition_TypeDefinitionIndex)->GetStaticField(0x10290);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameplayTagContainerMatchCondition_TypeDefinitionIndex)->GetStaticField(0x10294);
		}
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::Foundation::Unreal::SerializableGameplayTagQuery* tagMatchExpression; // 0x38
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> baseData; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::GameplayTagContainerMatchConditionInstanceDataVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::GameplayTagContainerMatchConditionInstanceDataVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::GameplayTagContainerMatchCondition Create()
		{
			return ((::NPCCrowd::Ability::GameplayTagContainerMatchCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_GAMEPLAYTAGCONTAINERMATCHCONDITION_CREATE_OFFSET))();
		}
	};
}
