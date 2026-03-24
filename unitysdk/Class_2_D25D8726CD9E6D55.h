#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_42.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_75.h"
#include "unitysdk/System/DateTime.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_D25D8726CD9E6D55__CTOR_OFFSET UNITYSDK_OFFSET(0x172707F0)

inline static constexpr unsigned int Class_2_D25D8726CD9E6D55_TypeDefinitionIndex = 10292;

class Class_2_D25D8726CD9E6D55 : public ::Class_1_EBCA2A4357C4C8BF_42
{
public:
	::System::DateTime Field_2_1; // 0x58
	::System::DateTime Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_75 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_75, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_D25D8726CD9E6D55__CTOR_OFFSET))(this, a1, a2);
	}
};
