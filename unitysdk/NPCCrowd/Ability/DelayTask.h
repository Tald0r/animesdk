#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class DelayTaskVirtualProxy; }

#define NPCCROWD_ABILITY_DELAYTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x6A010B0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FF840)
#define NPCCROWD_ABILITY_DELAYTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FF7D0)
#define NPCCROWD_ABILITY_DELAYTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_DELAYTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2FF830)
#define NPCCROWD_ABILITY_DELAYTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6A00FB0)
#define NPCCROWD_ABILITY_DELAYTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2FF760)
#define NPCCROWD_ABILITY_DELAYTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A01200)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int DelayTask_TypeDefinitionIndex = 54593;

	struct alignas(4) DelayTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(DelayTask_TypeDefinitionIndex)->GetStaticField(0xC570);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DelayTask_TypeDefinitionIndex)->GetStaticField(0xC574);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::System::Single delayTime; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::DelayTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::DelayTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::DelayTask Create()
		{
			return ((::NPCCrowd::Ability::DelayTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_DELAYTASK_CREATE_OFFSET))();
		}
	};
}
