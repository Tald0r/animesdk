#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F2A7939F5DFF18C1__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2BC800)

inline static constexpr unsigned int Struct_2_F2A7939F5DFF18C1_TypeDefinitionIndex = 48160;

struct alignas(8) Struct_2_F2A7939F5DFF18C1
{
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F2A7939F5DFF18C1_TypeDefinitionIndex)->GetStaticField(0x2AA40);
	}
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F2A7939F5DFF18C1__CCTOR_OFFSET))();
	}
};
