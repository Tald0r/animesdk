#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_1A345EAE5F749316_83;
class Class_3_C248956D95AFBB36_5;

#define STRUCT_2_51D2CD06047CB4B2_METHOD_2_6AF4AA9BCE6D2D8C_OFFSET UNITYSDK_OFFSET(0x34DBC0)

inline static constexpr unsigned int Struct_2_51D2CD06047CB4B2_TypeDefinitionIndex = 43934;

struct alignas(8) Struct_2_51D2CD06047CB4B2
{
	::System::Int32 Field_2_0; // 0x10
	::Class_3_1A345EAE5F749316_83* Field_2_1; // 0x18

	::Class_3_C248956D95AFBB36_5* Method_2_6AF4AA9BCE6D2D8C(::System::UInt32 a1)
	{
		return ((::Class_3_C248956D95AFBB36_5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_51D2CD06047CB4B2_METHOD_2_6AF4AA9BCE6D2D8C_OFFSET))(this, a1);
	}
};
