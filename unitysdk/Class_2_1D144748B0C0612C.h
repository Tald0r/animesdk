#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2DEE66E87E2572E.h"
#include "unitysdk/Enum_3_7287219DC64CD06D.h"

#define CLASS_2_1D144748B0C0612C_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x8D57C90)
#define CLASS_2_1D144748B0C0612C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D57CA0)

inline static constexpr unsigned int Class_2_1D144748B0C0612C_TypeDefinitionIndex = 41235;

class Class_2_1D144748B0C0612C : public ::Class_1_E2DEE66E87E2572E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D144748B0C0612C__CTOR_OFFSET))(this);
	}

	::Enum_3_7287219DC64CD06D get_Type()
	{
		return ((::Enum_3_7287219DC64CD06D(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D144748B0C0612C_GET_TYPE_OFFSET))(this);
	}
};
