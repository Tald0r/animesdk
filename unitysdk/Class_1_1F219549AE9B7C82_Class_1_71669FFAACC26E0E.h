#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F152DBF108B0858.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;

#define CLASS_1_1F219549AE9B7C82_CLASS_1_71669FFAACC26E0E_METHOD_1_BFFE0D476A0214C1_OFFSET UNITYSDK_OFFSET(0x63C8000)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_71669FFAACC26E0E__CTOR_OFFSET UNITYSDK_OFFSET(0x63C7FF0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_71669FFAACC26E0E_TypeDefinitionIndex = 62822;

class Class_1_1F219549AE9B7C82_Class_1_71669FFAACC26E0E : public ::System::Object
{
public:
	::Class_2_D02DABCF41CDA271* Field_1_3; // 0x10
	::Class_2_DF2C726EEEEC912D* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::Enum_3_5F152DBF108B0858 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_71669FFAACC26E0E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BFFE0D476A0214C1(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_71669FFAACC26E0E_METHOD_1_BFFE0D476A0214C1_OFFSET))(this, a1);
	}
};
