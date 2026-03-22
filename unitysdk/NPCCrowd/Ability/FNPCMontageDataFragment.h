#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x5DFBB30)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2C4170)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2C4110)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x5DFB990)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C40A0)
#define NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x5DFBC70)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCMontageDataFragment_TypeDefinitionIndex = 67009;

	struct alignas(4) FNPCMontageDataFragment
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FNPCMontageDataFragment_TypeDefinitionIndex)->GetStaticField(0x114B0);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FNPCMontageDataFragment_TypeDefinitionIndex)->GetStaticField(0x114B4);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Int32 montageKey; // 0x14
		::System::Boolean montagePlayFlag; // 0x18
		::System::Single montageLength; // 0x1C
		::System::Single montageTimer; // 0x20
		::System::Boolean isLoop; // 0x24
		::System::Single blendTime; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FNPCMontageDataFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCMontageDataFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCMONTAGEDATAFRAGMENT_CREATE_OFFSET))();
		}
	};
}
