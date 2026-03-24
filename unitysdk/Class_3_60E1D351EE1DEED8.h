#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974_2.h"

class Class_2_208CC9941471731A_64;
class Class_2_A78FC80A78B3367C_3;

#define CLASS_3_60E1D351EE1DEED8_METHOD_3_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xAF54D00)
#define CLASS_3_60E1D351EE1DEED8_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xAF54CF0)
#define CLASS_3_60E1D351EE1DEED8__CTOR_OFFSET UNITYSDK_OFFSET(0xAF54BF0)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_TypeDefinitionIndex = 46900;

class Class_3_60E1D351EE1DEED8 : public ::Class_2_855BB6A8CC9E7974_2
{
public:
	::Class_2_208CC9941471731A_64* Field_3_1; // 0x30
	::Class_2_A78FC80A78B3367C_3* Field_3_0; // 0x38

	::System::Void _ctor(::Class_2_A78FC80A78B3367C_3* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A78FC80A78B3367C_3*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_METHOD_3_289F28027FF47717_OFFSET))(this);
	}
};
