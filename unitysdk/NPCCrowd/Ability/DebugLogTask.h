#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class DebugLogTaskVirtualProxy; }

#define NPCCROWD_ABILITY_DEBUGLOGTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x5DFB480)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C3F20)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C3EB0)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2C3F10)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x5DFB380)
#define NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E40)
#define NPCCROWD_ABILITY_DEBUGLOGTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x5DFB5F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DebugLogTask_TypeDefinitionIndex = 68181;

	struct alignas(4) DebugLogTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DebugLogTask_TypeDefinitionIndex)->GetStaticField(0x11490);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(DebugLogTask_TypeDefinitionIndex)->GetStaticField(0x11494);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::UnityEngine::LogType logType; // 0x30
		::Foundation::Unreal::FName debugMessage; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x3C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::DebugLogTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::DebugLogTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::DebugLogTask Create()
		{
			return ((::NPCCrowd::Ability::DebugLogTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DEBUGLOGTASK_CREATE_OFFSET))();
		}
	};
}
