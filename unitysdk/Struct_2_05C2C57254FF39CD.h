#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Struct_2_05C2C57254FF39CD_Class_3_50D343C44D28BEFB_1;

#define STRUCT_2_05C2C57254FF39CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99EC40)
#define STRUCT_2_05C2C57254FF39CD__CTOR_OFFSET UNITYSDK_OFFSET(0x3074E0)

inline static constexpr unsigned int Struct_2_05C2C57254FF39CD_TypeDefinitionIndex = 25270;

struct alignas(8) Struct_2_05C2C57254FF39CD
{
	::Struct_2_05C2C57254FF39CD_Class_3_50D343C44D28BEFB_1* Field_2_0; // 0x10

	::System::Void _ctor(::Struct_2_05C2C57254FF39CD_Class_3_50D343C44D28BEFB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_05C2C57254FF39CD_Class_3_50D343C44D28BEFB_1*))((::PBYTE)hIl2Cpp + STRUCT_2_05C2C57254FF39CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_05C2C57254FF39CD_DISPOSE_OFFSET))(this);
	}
};
