#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_40.h"

#define CLASS_3_B8BCBE7E7B930C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFB7940)

inline static constexpr unsigned int Class_3_B8BCBE7E7B930C8A_TypeDefinitionIndex = 81545;

class Class_3_B8BCBE7E7B930C8A : public ::Class_2_A48F3719AA1CF200_40
{
public:
	::System::Int64 Field_3_1; // 0x20
	::System::UInt64 Field_3_0; // 0x28
	::System::Single Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8BCBE7E7B930C8A__CTOR_OFFSET))(this);
	}
};
