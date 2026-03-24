#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_945ACFB1FEBC7A2C_5.h"

namespace System { class String; }

#define CLASS_2_5AD8A37AA06A2983_4_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0xBCE3870)
#define CLASS_2_5AD8A37AA06A2983_4_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBCE3800)
#define CLASS_2_5AD8A37AA06A2983_4__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE3860)

inline static constexpr unsigned int Class_2_5AD8A37AA06A2983_4_TypeDefinitionIndex = 69169;

class Class_2_5AD8A37AA06A2983_4 : public ::Class_1_945ACFB1FEBC7A2C_5
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_4__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_4_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_4_METHOD_2_DA1BF2C227DC3D86_1_OFFSET))(this);
	}
};
