#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2DEE66E87E2572E.h"
#include "unitysdk/Enum_3_CC3BC82D2D2360D0.h"

#define CLASS_2_1D144748B0C0612C_7_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA0C5A80)
#define CLASS_2_1D144748B0C0612C_7__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C5A90)

inline static constexpr unsigned int Class_2_1D144748B0C0612C_7_TypeDefinitionIndex = 65353;

class Class_2_1D144748B0C0612C_7 : public ::Class_1_E2DEE66E87E2572E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D144748B0C0612C_7__CTOR_OFFSET))(this);
	}

	::Enum_3_CC3BC82D2D2360D0 get_Type()
	{
		return ((::Enum_3_CC3BC82D2D2360D0(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D144748B0C0612C_7_GET_TYPE_OFFSET))(this);
	}
};
