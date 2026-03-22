#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class AttractorUseTaskVirtualProxy; }

#define NPCCROWD_ABILITY_ATTRACTORUSETASK_CREATE_OFFSET UNITYSDK_OFFSET(0x6A00BC0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2FF700)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2FF690)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2FF6F0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x6A00AC0)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2FF620)
#define NPCCROWD_ABILITY_ATTRACTORUSETASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A00D30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorUseTask_TypeDefinitionIndex = 51415;

	struct alignas(4) AttractorUseTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AttractorUseTask_TypeDefinitionIndex)->GetStaticField(0xC560);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(AttractorUseTask_TypeDefinitionIndex)->GetStaticField(0xC564);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x38
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x40
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackBoardHandle; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::AttractorUseTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::AttractorUseTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::AttractorUseTask Create()
		{
			return ((::NPCCrowd::Ability::AttractorUseTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORUSETASK_CREATE_OFFSET))();
		}
	};
}
