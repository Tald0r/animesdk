#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x5DFBFC0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C43E0)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C4380)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x5DFBE20)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C4310)
#define NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x5DFC160)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCNavmeshFragment_TypeDefinitionIndex = 50270;

	struct alignas(4) FNPCNavmeshFragment
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FNPCNavmeshFragment_TypeDefinitionIndex)->GetStaticField(0x114C0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FNPCNavmeshFragment_TypeDefinitionIndex)->GetStaticField(0x114C4);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Boolean enable; // 0x14
		::UnityEngine::Vector3 targetPos; // 0x18
		::UnityEngine::Vector3 nextPos; // 0x24
		::UnityEngine::Vector3 forward; // 0x30
		::UnityEngine::Vector3 extent; // 0x3C
		::System::Single initDesiredSpeed; // 0x48
		::System::Single desiredSpeed; // 0x4C
		::System::Single stopDistance; // 0x50
		::System::Boolean ignoreStop; // 0x54
		::System::Single DistanceToGoal; // 0x58
		::System::Boolean arrived; // 0x5C
		::System::Boolean simpleMode; // 0x5D
		::System::Int32 minPathQueryHandler; // 0x60
		::System::Boolean isInStair; // 0x64
		::System::Int32 stairType; // 0x68
		::System::Single SlopeSpeedScale; // 0x6C
		::System::Single StairSpeedBlendingDuration; // 0x70
		::System::Single StairSpeedStart; // 0x74
		::System::Single StairSpeedTarget; // 0x78

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FNPCNavmeshFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCNavmeshFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVMESHFRAGMENT_CREATE_OFFSET))();
		}
	};
}
