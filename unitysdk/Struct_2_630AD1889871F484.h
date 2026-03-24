#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C0FE5C5ECCA2F598.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_630AD1889871F484_METHOD_2_7E9EEEEB4E03FA52_OFFSET UNITYSDK_OFFSET(0x6B1D9E0)

inline static constexpr unsigned int Struct_2_630AD1889871F484_TypeDefinitionIndex = 55930;

struct alignas(8) Struct_2_630AD1889871F484
{
	::Enum_3_C0FE5C5ECCA2F598 Field_2_0; // 0x10
	::System::Object* Field_2_1; // 0x18

	static ::Struct_2_630AD1889871F484 Method_2_7E9EEEEB4E03FA52(::Enum_3_C0FE5C5ECCA2F598 a1)
	{
		return ((::Struct_2_630AD1889871F484(*)(::Enum_3_C0FE5C5ECCA2F598))((::PBYTE)hIl2Cpp + STRUCT_2_630AD1889871F484_METHOD_2_7E9EEEEB4E03FA52_OFFSET))(a1);
	}
};
