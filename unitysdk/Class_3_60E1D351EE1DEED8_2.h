#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974_2.h"

class Class_2_208CC9941471731A_64;
class Class_2_E33C3D8379182471;

#define CLASS_3_60E1D351EE1DEED8_2_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x642E1D0)
#define CLASS_3_60E1D351EE1DEED8_2_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x642E1C0)
#define CLASS_3_60E1D351EE1DEED8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x642E0C0)

inline static constexpr unsigned int Class_3_60E1D351EE1DEED8_2_TypeDefinitionIndex = 71063;

class Class_3_60E1D351EE1DEED8_2 : public ::Class_2_855BB6A8CC9E7974_2
{
public:
	::Class_2_208CC9941471731A_64* Field_3_1; // 0x30
	::Class_2_E33C3D8379182471* Field_3_0; // 0x38

	::System::Void _ctor(::Class_2_E33C3D8379182471* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E33C3D8379182471*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60E1D351EE1DEED8_2_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}
};
