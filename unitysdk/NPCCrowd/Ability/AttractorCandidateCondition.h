#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class AttractorCandidateConditionVirtualProxy; }

#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0xA104140)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x37AEB0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x37AE40)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x37AEA0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0xA104040)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x37ADD0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA104290)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorCandidateCondition_TypeDefinitionIndex = 68213;

	struct alignas(4) AttractorCandidateCondition
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorCandidateCondition_TypeDefinitionIndex)->GetStaticField(0x10250);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorCandidateCondition_TypeDefinitionIndex)->GetStaticField(0x10254);
		}
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::AttractorCandidateConditionVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::AttractorCandidateConditionVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::AttractorCandidateCondition Create()
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_CREATE_OFFSET))();
		}
	};
}
