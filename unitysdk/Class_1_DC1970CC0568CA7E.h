#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_DC1970CC0568CA7E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD750250)
#define CLASS_1_DC1970CC0568CA7E_METHOD_1_DB5DC8D2DC7EC5EF_OFFSET UNITYSDK_OFFSET(0xD750460)
#define CLASS_1_DC1970CC0568CA7E__CTOR_OFFSET UNITYSDK_OFFSET(0xD750140)

inline static constexpr unsigned int Class_1_DC1970CC0568CA7E_TypeDefinitionIndex = 55908;

class Class_1_DC1970CC0568CA7E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::System::String* Field_1_4; // 0x10
	::System::Diagnostics::Stopwatch* Field_1_3; // 0x18
	::System::Text::StringBuilder* Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC1970CC0568CA7E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1970CC0568CA7E_DISPOSE_OFFSET))(this);
	}

	::System::Int64 Method_1_DB5DC8D2DC7EC5EF()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1970CC0568CA7E_METHOD_1_DB5DC8D2DC7EC5EF_OFFSET))(this);
	}
};
