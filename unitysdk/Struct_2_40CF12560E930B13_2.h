#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4F1F8ABDC2B55312.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_40CF12560E930B13_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x35B3C0)
#define STRUCT_2_40CF12560E930B13_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x35B350)

inline static constexpr unsigned int Struct_2_40CF12560E930B13_2_TypeDefinitionIndex = 66053;

struct alignas(1) Struct_2_40CF12560E930B13_2
{
	::System::Int32 GetHashCode(::Enum_3_4F1F8ABDC2B55312 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_4F1F8ABDC2B55312))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_2_GETHASHCODE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Enum_3_4F1F8ABDC2B55312 a1, ::Enum_3_4F1F8ABDC2B55312 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_4F1F8ABDC2B55312, ::Enum_3_4F1F8ABDC2B55312))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_2_EQUALS_OFFSET))(this, a1, a2);
	}
};
