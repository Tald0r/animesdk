#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_180.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_507.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_719_METHOD_2_2FE14E9DDA8EF9CA_OFFSET UNITYSDK_OFFSET(0x13C8AF10)
#define CLASS_2_208CC9941471731A_719__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8AF20)

inline static constexpr unsigned int Class_2_208CC9941471731A_719_TypeDefinitionIndex = 14458;

class Class_2_208CC9941471731A_719 : public ::Class_1_5DA2E7556103D5A3_180
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_507 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_507, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_719__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_2FE14E9DDA8EF9CA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_719_METHOD_2_2FE14E9DDA8EF9CA_OFFSET))(this);
	}
};
