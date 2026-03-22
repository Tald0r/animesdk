#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define STATETREECORE_BASEFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x19BD46D0)
#define STATETREECORE_BASEFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8EA200)
#define STATETREECORE_BASEFRAGMENT_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x8EA1A0)
#define STATETREECORE_BASEFRAGMENT_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define STATETREECORE_BASEFRAGMENT_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x19BD4650)
#define STATETREECORE_BASEFRAGMENT_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2D3600)
#define STATETREECORE_BASEFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD4730)

namespace StateTreeCore
{
	inline static constexpr unsigned int BaseFragment_TypeDefinitionIndex = 26951;

	struct alignas(4) BaseFragment
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(BaseFragment_TypeDefinitionIndex)->GetStaticField(0x4A50);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BaseFragment_TypeDefinitionIndex)->GetStaticField(0x4A54);
		}
		::UnrealTypes::FStructHandle TypeHandle; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_REGISTERTYPE_OFFSET))();
		}

		static ::StateTreeCore::BaseFragment Create()
		{
			return ((::StateTreeCore::BaseFragment(*)())((::PBYTE)hIl2Cpp + STATETREECORE_BASEFRAGMENT_CREATE_OFFSET))();
		}
	};
}
