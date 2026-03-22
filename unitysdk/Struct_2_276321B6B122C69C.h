#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_276321B6B122C69C_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B3360)
#define STRUCT_2_276321B6B122C69C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B33E0)
#define STRUCT_2_276321B6B122C69C_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x3B3450)
#define STRUCT_2_276321B6B122C69C__CTOR_OFFSET UNITYSDK_OFFSET(0x2D3730)

inline static constexpr unsigned int Struct_2_276321B6B122C69C_TypeDefinitionIndex = 68385;

struct alignas(4) Struct_2_276321B6B122C69C
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_276321B6B122C69C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_276321B6B122C69C))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
