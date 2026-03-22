#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_17.h"
#include "unitysdk/Share/ENpcType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_101.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_F346500DFC680A13_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x18517030)
#define CLASS_2_F346500DFC680A13_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18517020)
#define CLASS_2_F346500DFC680A13_METHOD_2_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0x18517040)
#define CLASS_2_F346500DFC680A13__CTOR_OFFSET UNITYSDK_OFFSET(0x18516FE0)

inline static constexpr unsigned int Class_2_F346500DFC680A13_TypeDefinitionIndex = 11664;

class Class_2_F346500DFC680A13 : public ::Class_1_5DA2E7556103D5A3_17
{
public:
	::System::String* Field_2_2; // 0x68
	::System::Int32 Field_2_1; // 0x70
	::Share::ENpcType Field_2_0; // 0x74

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_101 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_101, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_F346500DFC680A13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F346500DFC680A13_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F346500DFC680A13_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::String* Method_2_CFDB2DF757369D2B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F346500DFC680A13_METHOD_2_CFDB2DF757369D2B_OFFSET))(this);
	}
};
