#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AIActionStateParamType.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/NPCCrowd/Accessories/NPCUnionAnimatorManager_NPCAnimationStateParams.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class SetStateMachineParamTaskVirtualProxy; }

#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x648B560)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2D4620)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2D45B0)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2D4610)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x648B460)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2D4540)
#define NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x648B6D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SetStateMachineParamTask_TypeDefinitionIndex = 43702;

	struct alignas(4) SetStateMachineParamTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(SetStateMachineParamTask_TypeDefinitionIndex)->GetStaticField(0xE840);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SetStateMachineParamTask_TypeDefinitionIndex)->GetStaticField(0xE844);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::NPCCrowd::AI::AIActionStateParamType paramType; // 0x30
		::NPCCrowd::Accessories::NPCUnionAnimatorManager_NPCAnimationStateParams key; // 0x34
		::System::Single value; // 0x38
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x3C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::SetStateMachineParamTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::SetStateMachineParamTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::SetStateMachineParamTask Create()
		{
			return ((::NPCCrowd::Ability::SetStateMachineParamTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_SETSTATEMACHINEPARAMTASK_CREATE_OFFSET))();
		}
	};
}
