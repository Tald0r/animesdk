#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_224C5656E48B25DB.h"

namespace System { class String; }

#define CLASS_3_48E2BFC469E32995__CTOR_OFFSET UNITYSDK_OFFSET(0xB168A90)

inline static constexpr unsigned int Class_3_48E2BFC469E32995_TypeDefinitionIndex = 39380;

class Class_3_48E2BFC469E32995 : public ::Class_2_224C5656E48B25DB
{
public:
	::System::String* Field_3_1; // 0x38
	::System::Int32 Field_3_0; // 0x40

	::System::Void _ctor(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_48E2BFC469E32995__CTOR_OFFSET))(this, a1, a2);
	}
};
