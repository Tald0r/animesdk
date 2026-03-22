#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x743B1A0)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x323990)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x323930)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x743B000)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x3238C0)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x743B2E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCBaseDataFragment_TypeDefinitionIndex = 42478;

	struct alignas(4) FNPCBaseDataFragment
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FNPCBaseDataFragment_TypeDefinitionIndex)->GetStaticField(0xBA70);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FNPCBaseDataFragment_TypeDefinitionIndex)->GetStaticField(0xBA74);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::UInt32 entityID; // 0x14
		::System::Int32 TagID; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FNPCBaseDataFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCBaseDataFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_CREATE_OFFSET))();
		}
	};
}
