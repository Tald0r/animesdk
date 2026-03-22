#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class CheckIsFollowingConditionVirtualProxy; }

#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x694D750)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FD0F0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FD080)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2FD0E0)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x694D650)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2FD010)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x694D8A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CheckIsFollowingCondition_TypeDefinitionIndex = 44059;

	struct alignas(4) CheckIsFollowingCondition
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CheckIsFollowingCondition_TypeDefinitionIndex)->GetStaticField(0xE270);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CheckIsFollowingCondition_TypeDefinitionIndex)->GetStaticField(0xE274);
		}
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::System::Boolean revert; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::CheckIsFollowingConditionVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingConditionVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::CheckIsFollowingCondition Create()
		{
			return ((::NPCCrowd::Ability::CheckIsFollowingCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_CREATE_OFFSET))();
		}
	};
}
