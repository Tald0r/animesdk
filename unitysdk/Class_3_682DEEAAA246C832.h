#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_40.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

class Class_2_16127BAF302BAF1A;

#define CLASS_3_682DEEAAA246C832__CTOR_OFFSET UNITYSDK_OFFSET(0x1B012F30)

inline static constexpr unsigned int Class_3_682DEEAAA246C832_TypeDefinitionIndex = 81276;

class Class_3_682DEEAAA246C832 : public ::Class_2_A48F3719AA1CF200_40
{
public:
	::Class_2_16127BAF302BAF1A* Field_3_0; // 0x20
	::Struct_2_E614D3B245F96744 Field_3_2; // 0x28
	::Struct_2_E614D3B245F96744 Field_3_1; // 0x34
	::System::Single Field_3_4; // 0x40
	::System::UInt64 Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_682DEEAAA246C832__CTOR_OFFSET))(this);
	}
};
