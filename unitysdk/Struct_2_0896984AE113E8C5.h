#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_EBACA96C31DAB7D8;
namespace UnityEngine { class Material; }

#define STRUCT_2_0896984AE113E8C5_METHOD_2_66E54D9EB6F82BAB_OFFSET UNITYSDK_OFFSET(0x387620)
#define STRUCT_2_0896984AE113E8C5__CTOR_OFFSET UNITYSDK_OFFSET(0x2EB420)

inline static constexpr unsigned int Struct_2_0896984AE113E8C5_TypeDefinitionIndex = 74497;

struct alignas(8) Struct_2_0896984AE113E8C5
{
	::Class_1_EBACA96C31DAB7D8* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	::System::Void _ctor(::Class_1_EBACA96C31DAB7D8* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBACA96C31DAB7D8*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_0896984AE113E8C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_66E54D9EB6F82BAB(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + STRUCT_2_0896984AE113E8C5_METHOD_2_66E54D9EB6F82BAB_OFFSET))(this, a1);
	}
};
