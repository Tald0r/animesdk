#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_293.h"
#include "unitysdk/Struct_2_53EC6FFE9325B737_18.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_49E2D16D119950F3_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x7B2AC60)
#define CLASS_2_49E2D16D119950F3_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x7B2AC70)
#define CLASS_2_49E2D16D119950F3__CTOR_OFFSET UNITYSDK_OFFSET(0x7B2AC40)

inline static constexpr unsigned int Class_2_49E2D16D119950F3_TypeDefinitionIndex = 63701;

class Class_2_49E2D16D119950F3 : public ::Class_1_5DA2E7556103D5A3_293
{
public:
	::System::Int32 Field_2_0; // 0xA8

	::System::Void _ctor(::Struct_2_53EC6FFE9325B737_18 a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_13* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_53EC6FFE9325B737_18, ::System::Int32, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_49E2D16D119950F3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_49E2D16D119950F3_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49E2D16D119950F3_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
