#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_514273462AB8F0D3;

#define STRUCT_2_4CBCEC118189F55D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x383C10)
#define STRUCT_2_4CBCEC118189F55D__CTOR_OFFSET UNITYSDK_OFFSET(0x383BF0)

inline static constexpr unsigned int Struct_2_4CBCEC118189F55D_TypeDefinitionIndex = 56286;

struct alignas(8) Struct_2_4CBCEC118189F55D
{
	::Class_3_514273462AB8F0D3* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor(::Class_3_514273462AB8F0D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_514273462AB8F0D3*))((::PBYTE)hIl2Cpp + STRUCT_2_4CBCEC118189F55D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4CBCEC118189F55D_DISPOSE_OFFSET))(this);
	}
};
