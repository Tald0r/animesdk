#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_224C5656E48B25DB.h"

namespace System { class String; }

#define CLASS_3_D4E8305E10AA025B__CTOR_OFFSET UNITYSDK_OFFSET(0x77824A0)

inline static constexpr unsigned int Class_3_D4E8305E10AA025B_TypeDefinitionIndex = 74185;

class Class_3_D4E8305E10AA025B : public ::Class_2_224C5656E48B25DB
{
public:
	::System::String* Field_3_1; // 0x38
	::System::String* Field_3_0; // 0x40

	::System::Void _ctor(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_D4E8305E10AA025B__CTOR_OFFSET))(this, a1, a2);
	}
};
