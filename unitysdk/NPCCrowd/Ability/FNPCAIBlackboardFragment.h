#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ENPCNavigateState.h"
#include "unitysdk/NPCCrowd/Ability/MinPathQueryResult.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowProcessor_NearestData.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x7224F80)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x320560)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x320500)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7224DE0)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x320490)
#define NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x7225100)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAIBlackboardFragment_TypeDefinitionIndex = 44125;

	struct alignas(4) FNPCAIBlackboardFragment
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FNPCAIBlackboardFragment_TypeDefinitionIndex)->GetStaticField(0x11760);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FNPCAIBlackboardFragment_TypeDefinitionIndex)->GetStaticField(0x11764);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::NPCCrowd::Ability::ENPCNavigateState navigateState; // 0x14
		::NPCCrowd::Ability::MinPathQueryResult minPathQueryResult; // 0x18
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData nearestData; // 0x28
		::System::Boolean isFollowingAvatar; // 0x44
		::System::Boolean turnFlag; // 0x45
		::System::Boolean turnRequest; // 0x46
		::System::Single turnAngle; // 0x48
		::System::Single attractorCDTimer; // 0x4C
		::System::Int32 targetPathFollowNode; // 0x50
		::System::Int32 serverIdleMontageKey; // 0x54

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FNPCAIBlackboardFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCAIBlackboardFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCAIBLACKBOARDFRAGMENT_CREATE_OFFSET))();
		}
	};
}
