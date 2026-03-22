#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEENTRYID_FROMUNSTABLEINT_OFFSET UNITYSDK_OFFSET(0x1AD8EFB0)
#define FOUNDATION_UNREAL_FNAMEENTRYID_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x963B80)
#define FOUNDATION_UNREAL_FNAMEENTRYID_TOUNSTABLEINT_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define FOUNDATION_UNREAL_FNAMEENTRYID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD8EFC0)
#define FOUNDATION_UNREAL_FNAMEENTRYID__CTOR_OFFSET UNITYSDK_OFFSET(0x2D3600)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameEntryId_TypeDefinitionIndex = 8865;

	struct alignas(4) FNameEntryId
	{
		static ::Foundation::Unreal::FNameEntryId* StaticGet_Invalid()
		{
			return (::Foundation::Unreal::FNameEntryId*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryId_TypeDefinitionIndex)->GetStaticField(0x3CE0);
		}
		static ::Foundation::Unreal::FNameEntryId* StaticGet_None()
		{
			return (::Foundation::Unreal::FNameEntryId*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryId_TypeDefinitionIndex)->GetStaticField(0x3CE4);
		}
		::System::UInt32 _value; // 0x10

		::System::Void _ctor(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID__CTOR_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 ToUnstableInt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID_TOUNSTABLEINT_OFFSET))(this);
		}

		static ::Foundation::Unreal::FNameEntryId FromUnstableInt(::System::UInt32 value)
		{
			return ((::Foundation::Unreal::FNameEntryId(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYID_FROMUNSTABLEINT_OFFSET))(value);
		}
	};
}
