#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_5.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_110646609982E7A8__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAAF2D0)

inline static constexpr unsigned int Struct_2_110646609982E7A8_TypeDefinitionIndex = 63002;

struct alignas(8) Struct_2_110646609982E7A8
{
	static ::Struct_2_110646609982E7A8* StaticGet_Field_2_0()
	{
		return (::Struct_2_110646609982E7A8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_110646609982E7A8_TypeDefinitionIndex)->GetStaticField(0x36070);
	}
	::Enum_3_121CF606CB7E9CD1_5 Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Int32 Field_2_5; // 0x28
	::System::Int32 Field_2_6; // 0x2C
	::System::Int32 Field_2_7; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_110646609982E7A8__CCTOR_OFFSET))();
	}
};
