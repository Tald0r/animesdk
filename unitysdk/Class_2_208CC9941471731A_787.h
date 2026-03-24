#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_132.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_502.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_208CC9941471731A_787_METHOD_2_C0AB8649EB0F94B8_OFFSET UNITYSDK_OFFSET(0x12D028D0)
#define CLASS_2_208CC9941471731A_787__CTOR_OFFSET UNITYSDK_OFFSET(0x12D028C0)

inline static constexpr unsigned int Class_2_208CC9941471731A_787_TypeDefinitionIndex = 14173;

class Class_2_208CC9941471731A_787 : public ::Class_1_5DA2E7556103D5A3_132
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_502 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_502, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_787__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_C0AB8649EB0F94B8()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_787_METHOD_2_C0AB8649EB0F94B8_OFFSET))(this);
	}
};
