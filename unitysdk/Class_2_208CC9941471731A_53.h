#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_36.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_187.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_53_METHOD_2_45D9055A79A021B9_OFFSET UNITYSDK_OFFSET(0x1706F430)
#define CLASS_2_208CC9941471731A_53_METHOD_2_C38EDCCDCAA60BD7_OFFSET UNITYSDK_OFFSET(0x1706F3C0)
#define CLASS_2_208CC9941471731A_53__CTOR_OFFSET UNITYSDK_OFFSET(0x1706F3B0)

inline static constexpr unsigned int Class_2_208CC9941471731A_53_TypeDefinitionIndex = 10134;

class Class_2_208CC9941471731A_53 : public ::Class_1_5DA2E7556103D5A3_36
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_187 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_187, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_C38EDCCDCAA60BD7()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_53_METHOD_2_C38EDCCDCAA60BD7_OFFSET))(this);
	}

	::Share::EItemType Method_2_45D9055A79A021B9()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_53_METHOD_2_45D9055A79A021B9_OFFSET))(this);
	}
};
