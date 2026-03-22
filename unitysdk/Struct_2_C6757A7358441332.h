#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_9AE843FF905C0BDB;
namespace System { class String; }

#define STRUCT_2_C6757A7358441332_METHOD_2_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0x3B07A0)
#define STRUCT_2_C6757A7358441332__CTOR_OFFSET UNITYSDK_OFFSET(0x2D6E20)

inline static constexpr unsigned int Struct_2_C6757A7358441332_TypeDefinitionIndex = 55654;

struct alignas(8) Struct_2_C6757A7358441332
{
	::Class_3_9AE843FF905C0BDB* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::Class_3_9AE843FF905C0BDB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_C6757A7358441332__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C6757A7358441332_METHOD_2_E6D3C4C666E119D9_OFFSET))(this);
	}
};
