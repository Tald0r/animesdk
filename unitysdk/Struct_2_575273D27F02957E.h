#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4F5B254ADA117E5F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_575273D27F02957E_METHOD_2_9B5206D70B3FF4F5_OFFSET UNITYSDK_OFFSET(0x8DF0980)
#define STRUCT_2_575273D27F02957E__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DF0930)
#define STRUCT_2_575273D27F02957E__CTOR_OFFSET UNITYSDK_OFFSET(0x2D6E20)

inline static constexpr unsigned int Struct_2_575273D27F02957E_TypeDefinitionIndex = 75627;

struct alignas(8) Struct_2_575273D27F02957E
{
	static ::Struct_2_575273D27F02957E* StaticGet_Field_2_0()
	{
		return (::Struct_2_575273D27F02957E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_575273D27F02957E_TypeDefinitionIndex)->GetStaticField(0x30EF0);
	}
	::Enum_3_4F5B254ADA117E5F Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18

	::System::Void _ctor(::Enum_3_4F5B254ADA117E5F a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4F5B254ADA117E5F, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E__CCTOR_OFFSET))();
	}

	static ::Struct_2_575273D27F02957E Method_2_9B5206D70B3FF4F5(::Enum_3_4F5B254ADA117E5F a1)
	{
		return ((::Struct_2_575273D27F02957E(*)(::Enum_3_4F5B254ADA117E5F))((::PBYTE)hIl2Cpp + STRUCT_2_575273D27F02957E_METHOD_2_9B5206D70B3FF4F5_OFFSET))(a1);
	}
};
