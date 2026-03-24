#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_063F8286D5D40CFA_METHOD_2_67ED9BD712E351D7_OFFSET UNITYSDK_OFFSET(0x796FDF0)

inline static constexpr unsigned int Struct_2_063F8286D5D40CFA_TypeDefinitionIndex = 47718;

struct alignas(4) Struct_2_063F8286D5D40CFA
{
	// static const ::System::Int32 Field_2_0 = 0xFFFF; // 0x0
	::System::UInt32 Field_2_1; // 0x10
	::System::Int16 Field_2_2; // 0x14
	::System::UInt16 Field_2_3; // 0x16
	::System::UInt16 Field_2_4; // 0x18
	::System::UInt16 Field_2_5; // 0x1A

	static ::Struct_2_063F8286D5D40CFA Method_2_67ED9BD712E351D7(::System::Int32 a1)
	{
		return ((::Struct_2_063F8286D5D40CFA(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_063F8286D5D40CFA_METHOD_2_67ED9BD712E351D7_OFFSET))(a1);
	}
};
