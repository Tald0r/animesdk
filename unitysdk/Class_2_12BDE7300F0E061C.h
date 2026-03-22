#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1685EC66FBD28897.h"
#include "unitysdk/Class_2_12BDE7300F0E061C_Enum_3_31AEB9C2FD02C06E.h"

class Class_2_A3CFC20DC3954F5C;
class Class_2_D89CCC627A66D0AD;

#define CLASS_2_12BDE7300F0E061C__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA977490)
#define CLASS_2_12BDE7300F0E061C__CTOR_OFFSET UNITYSDK_OFFSET(0xA977450)

inline static constexpr unsigned int Class_2_12BDE7300F0E061C_TypeDefinitionIndex = 59783;

class Class_2_12BDE7300F0E061C : public ::Class_1_1685EC66FBD28897
{
public:
	::Class_2_D89CCC627A66D0AD* Field_2_0; // 0x70
	::System::Boolean Field_2_1; // 0x78
	::Class_2_12BDE7300F0E061C_Enum_3_31AEB9C2FD02C06E Field_2_2; // 0x7C

	::System::Void _ctor(::Class_2_A3CFC20DC3954F5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A3CFC20DC3954F5C*))((::PBYTE)hIl2Cpp + CLASS_2_12BDE7300F0E061C__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12BDE7300F0E061C__CTOR_1_OFFSET))(this);
	}
};
