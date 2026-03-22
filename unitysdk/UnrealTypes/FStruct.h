#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace System { class Object; }
namespace System { class Type; }

#define UNREALTYPES_FSTRUCT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x973520)
#define UNREALTYPES_FSTRUCT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9734C0)
#define UNREALTYPES_FSTRUCT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2C50B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FStruct_TypeDefinitionIndex = 23985;

	struct alignas(8) FStruct
	{
		::UnrealTypes::FStructHandle BaseStruct; // 0x10
		::Foundation::Unreal::FName Name; // 0x14
		::System::UInt32 TypeId; // 0x1C
		::System::Int32 Size; // 0x20
		::System::Int32 Alignment; // 0x24
		::System::Int32 AlignedSize; // 0x28
		::System::Type* Type; // 0x30
		::System::Object* VirtualProxy; // 0x38

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnrealTypes::FStruct other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStruct))((::PBYTE)hIl2Cpp + UNREALTYPES_FSTRUCT_EQUALS_1_OFFSET))(this, other);
		}
	};
}
