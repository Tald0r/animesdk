#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/CellLocation.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xA105690)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x37B320)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x37B2C0)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0xA1054F0)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x37B250)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1057C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex = 61266;

	struct alignas(4) FNPCNavigationObstacleGridCellLocationFragment
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex)->GetStaticField(0x10280);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FNPCNavigationObstacleGridCellLocationFragment_TypeDefinitionIndex)->GetStaticField(0x10284);
		}
		::StateTreeCore::BaseFragment Base; // 0x10
		::Foundation::Container::CellLocation Location; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_CREATE_OFFSET))();
		}
	};
}
