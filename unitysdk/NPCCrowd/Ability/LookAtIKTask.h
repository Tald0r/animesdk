#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class LookAtIKTaskVirtualProxy; }

#define NPCCROWD_ABILITY_LOOKATIKTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x5DFC4E0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C4520)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C44B0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_LOOKATIKTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2C4510)
#define NPCCROWD_ABILITY_LOOKATIKTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x5DFC3E0)
#define NPCCROWD_ABILITY_LOOKATIKTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C4440)
#define NPCCROWD_ABILITY_LOOKATIKTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x5DFC630)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int LookAtIKTask_TypeDefinitionIndex = 69688;

	struct alignas(4) LookAtIKTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(LookAtIKTask_TypeDefinitionIndex)->GetStaticField(0x114D0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LookAtIKTask_TypeDefinitionIndex)->GetStaticField(0x114D4);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::System::Boolean enable; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::LookAtIKTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::LookAtIKTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::LookAtIKTask Create()
		{
			return ((::NPCCrowd::Ability::LookAtIKTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_CREATE_OFFSET))();
		}
	};
}
