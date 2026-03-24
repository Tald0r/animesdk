#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1685EC66FBD28897.h"
#include "unitysdk/Class_2_AC1B1CB16C488BEC_Enum_3_E1F3119CAA82375C.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_53;

#define CLASS_2_AC1B1CB16C488BEC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x74EA2F0)
#define CLASS_2_AC1B1CB16C488BEC__CTOR_OFFSET UNITYSDK_OFFSET(0x74EA270)

inline static constexpr unsigned int Class_2_AC1B1CB16C488BEC_TypeDefinitionIndex = 46467;

class Class_2_AC1B1CB16C488BEC : public ::Class_1_1685EC66FBD28897
{
public:
	::Class_2_208CC9941471731A_53* Field_2_6; // 0x70
	::Class_2_AC1B1CB16C488BEC_Enum_3_E1F3119CAA82375C Field_2_5; // 0x78
	::System::Boolean Field_2_0; // 0x7C
	::System::Boolean Field_2_1; // 0x7D
	::System::Boolean Field_2_4; // 0x7E
	::System::Int32 Field_2_2; // 0x80
	::System::Int32 Field_2_3; // 0x84

	::System::Void _ctor(::Class_1_0D6706375CDAAE8C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_2_AC1B1CB16C488BEC__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC1B1CB16C488BEC__CTOR_1_OFFSET))(this);
	}
};
