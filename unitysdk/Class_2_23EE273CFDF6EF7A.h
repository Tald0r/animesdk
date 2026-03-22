#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_23.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_45.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_23EE273CFDF6EF7A__CTOR_OFFSET UNITYSDK_OFFSET(0x169F4BE0)

inline static constexpr unsigned int Class_2_23EE273CFDF6EF7A_TypeDefinitionIndex = 12146;

class Class_2_23EE273CFDF6EF7A : public ::Class_1_5DA2E7556103D5A3_23
{
public:
	::System::String* Field_2_1; // 0x70
	::System::String* Field_2_0; // 0x78
	::Il2CppArray<::System::String*>* Field_2_3; // 0x80
	::System::String* Field_2_2; // 0x88

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_45 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_45, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_23EE273CFDF6EF7A__CTOR_OFFSET))(this, a1, a2);
	}
};
