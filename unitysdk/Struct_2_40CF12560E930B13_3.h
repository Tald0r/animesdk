#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B9A017F4B0BBC22E.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_40CF12560E930B13_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x374930)
#define STRUCT_2_40CF12560E930B13_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3748C0)

inline static constexpr unsigned int Struct_2_40CF12560E930B13_3_TypeDefinitionIndex = 68032;

struct alignas(1) Struct_2_40CF12560E930B13_3
{
	::System::Int32 GetHashCode(::Enum_3_B9A017F4B0BBC22E a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_B9A017F4B0BBC22E))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_3_GETHASHCODE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Enum_3_B9A017F4B0BBC22E a1, ::Enum_3_B9A017F4B0BBC22E a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_B9A017F4B0BBC22E, ::Enum_3_B9A017F4B0BBC22E))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_3_EQUALS_OFFSET))(this, a1, a2);
	}
};
