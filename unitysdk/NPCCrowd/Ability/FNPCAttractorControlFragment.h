#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/NPCAIActionState.h"
#include "unitysdk/NPCCrowd/Ability/NPCAttractorInteractState.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xA105200)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_FORCESETDATA_OFFSET UNITYSDK_OFFSET(0x37B0A0)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x37B1F0)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x37B190)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0xA105060)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_SETBEHAVIOURSSTATE_OFFSET UNITYSDK_OFFSET(0x37B030)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x37B120)
#define NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA105340)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAttractorControlFragment_TypeDefinitionIndex = 67977;

	struct alignas(4) FNPCAttractorControlFragment
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FNPCAttractorControlFragment_TypeDefinitionIndex)->GetStaticField(0x10270);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FNPCAttractorControlFragment_TypeDefinitionIndex)->GetStaticField(0x10274);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Boolean disableAtttract; // 0x14
		::NPCCrowd::Ability::NPCAttractorInteractState state; // 0x18
		::System::Single queryCD; // 0x1C
		::System::Int32 nearestAttractorHandler; // 0x20
		::NPCCrowd::AI::NPCAIActionState behavioursState; // 0x24
		::System::UInt32 curActionHandler; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT__CCTOR_OFFSET))();
		}

		::System::Void SetBehavioursState(::NPCCrowd::AI::NPCAIActionState state)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::NPCAIActionState))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_SETBEHAVIOURSSTATE_OFFSET))(this, state);
		}

		::System::Void ForceSetData(::System::Int32 nearestAttractorHandler, ::NPCCrowd::Ability::NPCAttractorInteractState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Ability::NPCAttractorInteractState))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_FORCESETDATA_OFFSET))(this, nearestAttractorHandler, state);
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FNPCAttractorControlFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCAttractorControlFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCATTRACTORCONTROLFRAGMENT_CREATE_OFFSET))();
		}
	};
}
