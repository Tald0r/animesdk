#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

#define STATETREECORE_COMPACTSTATETREEPARAMETERS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EA300)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8EA3E0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x8EA380)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x19BD4980)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD4A00)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8EA2D0)
#define STATETREECORE_COMPACTSTATETREEPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA260)

namespace StateTreeCore
{
	inline static constexpr unsigned int CompactStateTreeParameters_TypeDefinitionIndex = 26988;

	struct alignas(8) CompactStateTreeParameters
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(CompactStateTreeParameters_TypeDefinitionIndex)->GetStaticField(0x4A60);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CompactStateTreeParameters_TypeDefinitionIndex)->GetStaticField(0x4A64);
		}
		::UnrealTypes::FInstancedPropertyBag Parameters; // 0x10

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS__CTOR_OFFSET))(this, allocator);
		}

		::System::Void _ctor_1(::UnrealTypes::FInstancedPropertyBag& parameters)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedPropertyBag&))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS__CTOR_1_OFFSET))(this, parameters);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_GET_TYPEID_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_COMPACTSTATETREEPARAMETERS_REGISTERTYPE_OFFSET))();
		}
	};
}
