#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B136CFD8FB6B8F37__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB1B890)
#define STRUCT_2_B136CFD8FB6B8F37__CTOR_OFFSET UNITYSDK_OFFSET(0x2D3600)

inline static constexpr unsigned int Struct_2_B136CFD8FB6B8F37_TypeDefinitionIndex = 52565;

struct alignas(4) Struct_2_B136CFD8FB6B8F37
{
	static ::Struct_2_B136CFD8FB6B8F37* StaticGet_Field_2_0()
	{
		return (::Struct_2_B136CFD8FB6B8F37*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B136CFD8FB6B8F37_TypeDefinitionIndex)->GetStaticField(0x11510);
	}
	::System::Int32 Field_2_1; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37__CCTOR_OFFSET))();
	}
};
