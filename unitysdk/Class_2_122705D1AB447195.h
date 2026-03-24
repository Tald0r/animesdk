#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_765BE772598E3A58.h"
#include "unitysdk/System/EventArgs.h"

#define CLASS_2_122705D1AB447195__CTOR_OFFSET UNITYSDK_OFFSET(0xC51EF70)

inline static constexpr unsigned int Class_2_122705D1AB447195_TypeDefinitionIndex = 43343;

class Class_2_122705D1AB447195 : public ::System::EventArgs
{
public:
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::Enum_3_765BE772598E3A58 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_122705D1AB447195__CTOR_OFFSET))(this);
	}
};
