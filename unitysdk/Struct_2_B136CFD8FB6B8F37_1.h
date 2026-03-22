#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B136CFD8FB6B8F37_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define STRUCT_2_B136CFD8FB6B8F37_1_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x346530)
#define STRUCT_2_B136CFD8FB6B8F37_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x82AED50)
#define STRUCT_2_B136CFD8FB6B8F37_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2D3600)

inline static constexpr unsigned int Struct_2_B136CFD8FB6B8F37_1_TypeDefinitionIndex = 55685;

struct alignas(4) Struct_2_B136CFD8FB6B8F37_1
{
	static ::Struct_2_B136CFD8FB6B8F37_1* StaticGet_Field_2_0()
	{
		return (::Struct_2_B136CFD8FB6B8F37_1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_B136CFD8FB6B8F37_1_TypeDefinitionIndex)->GetStaticField(0xD060);
	}
	::System::Int32 Field_2_1; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_1__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_1_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B136CFD8FB6B8F37_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
