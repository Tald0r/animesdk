#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_56101A14A39BFA03_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x699280)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_40709435CE1FB84D_1_OFFSET UNITYSDK_OFFSET(0x69A020)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_40709435CE1FB84D_OFFSET UNITYSDK_OFFSET(0x69DF60)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_580E046F32C3C32F_OFFSET UNITYSDK_OFFSET(0x12223380)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_7998FE9400D1767D_OFFSET UNITYSDK_OFFSET(0x6C27A0)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_B84F1C9E816AD9C0_1_OFFSET UNITYSDK_OFFSET(0x69A630)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x699130)
#define STRUCT_2_56101A14A39BFA03_METHOD_2_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x6996C0)
#define STRUCT_2_56101A14A39BFA03___INIT_OFFSET UNITYSDK_OFFSET(0x699120)

inline static constexpr unsigned int Struct_2_56101A14A39BFA03_TypeDefinitionIndex = 14935;

struct alignas(8) Struct_2_56101A14A39BFA03
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03___INIT_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_EFB6D6A58777DAF3_OFFSET))(this);
	}

	::Struct_2_56101A14A39BFA03 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_56101A14A39BFA03(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_B84F1C9E816AD9C0_1_OFFSET))(this);
	}

	::System::UInt64 Method_2_7998FE9400D1767D()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_7998FE9400D1767D_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_56101A14A39BFA03> Method_2_580E046F32C3C32F(::System::Int32 a1, ::System::UInt64 a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_56101A14A39BFA03>(*)(::System::Int32, ::System::UInt64, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_580E046F32C3C32F_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::Int32 Method_2_40709435CE1FB84D(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_40709435CE1FB84D_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_40709435CE1FB84D_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_56101A14A39BFA03_METHOD_2_40709435CE1FB84D_1_OFFSET))(this, a1);
	}
};
