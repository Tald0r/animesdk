#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class HasReactionConditionVirtualProxy; }

#define NPCCROWD_ABILITY_HASREACTIONCONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x7DF6270)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x339770)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x339700)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x339760)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7DF6170)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x339690)
#define NPCCROWD_ABILITY_HASREACTIONCONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x7DF63C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int HasReactionCondition_TypeDefinitionIndex = 39119;

	struct alignas(4) HasReactionCondition
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(HasReactionCondition_TypeDefinitionIndex)->GetStaticField(0x108F0);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(HasReactionCondition_TypeDefinitionIndex)->GetStaticField(0x108F4);
		}
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::HasReactionConditionVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::HasReactionConditionVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::HasReactionCondition Create()
		{
			return ((::NPCCrowd::Ability::HasReactionCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_HASREACTIONCONDITION_CREATE_OFFSET))();
		}
	};
}
