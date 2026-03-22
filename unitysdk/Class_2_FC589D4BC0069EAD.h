#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_152.h"
#include "unitysdk/Struct_2_53EC6FFE9325B737_14.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_FC589D4BC0069EAD_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13C98090)
#define CLASS_2_FC589D4BC0069EAD__CTOR_OFFSET UNITYSDK_OFFSET(0x13C97F20)

inline static constexpr unsigned int Class_2_FC589D4BC0069EAD_TypeDefinitionIndex = 11779;

class Class_2_FC589D4BC0069EAD : public ::Class_1_5DA2E7556103D5A3_152
{
public:
	::System::Boolean Field_2_2; // 0x108
	::System::Int32 Field_2_0; // 0x10C
	::System::Int32 Field_2_1; // 0x110

	::System::Void _ctor(::Struct_2_53EC6FFE9325B737_14 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_53EC6FFE9325B737_14, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_FC589D4BC0069EAD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC589D4BC0069EAD_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
