#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_3E75877A2888D88A_564_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_3E75877A2888D88A_564_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x699280)
#define STRUCT_2_3E75877A2888D88A_564_METHOD_2_3FB7760ADA66821B_OFFSET UNITYSDK_OFFSET(0x16F388F0)
#define STRUCT_2_3E75877A2888D88A_564_METHOD_2_9B0C43B0B6D3BA9B_1_OFFSET UNITYSDK_OFFSET(0x78F910)
#define STRUCT_2_3E75877A2888D88A_564_METHOD_2_9B0C43B0B6D3BA9B_2_OFFSET UNITYSDK_OFFSET(0x6B4990)
#define STRUCT_2_3E75877A2888D88A_564_METHOD_2_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x7118A0)
#define STRUCT_2_3E75877A2888D88A_564_METHOD_2_E079D6D1E2324B89_1_OFFSET UNITYSDK_OFFSET(0x699230)
#define STRUCT_2_3E75877A2888D88A_564_METHOD_2_E079D6D1E2324B89_OFFSET UNITYSDK_OFFSET(0x69C940)
#define STRUCT_2_3E75877A2888D88A_564_METHOD_2_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x699580)
#define STRUCT_2_3E75877A2888D88A_564___INIT_OFFSET UNITYSDK_OFFSET(0x699120)

inline static constexpr unsigned int Struct_2_3E75877A2888D88A_564_TypeDefinitionIndex = 12587;

struct alignas(8) Struct_2_3E75877A2888D88A_564
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E079D6D1E2324B89()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_METHOD_2_E079D6D1E2324B89_OFFSET))(this);
	}

	::System::String* Method_2_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_METHOD_2_EFB6D6A58777DAF3_OFFSET))(this);
	}

	::System::Int32 Method_2_E079D6D1E2324B89_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_METHOD_2_E079D6D1E2324B89_1_OFFSET))(this);
	}

	::System::Boolean Method_2_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_METHOD_2_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Boolean Method_2_9B0C43B0B6D3BA9B_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_METHOD_2_9B0C43B0B6D3BA9B_1_OFFSET))(this);
	}

	::System::Boolean Method_2_9B0C43B0B6D3BA9B_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_METHOD_2_9B0C43B0B6D3BA9B_2_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_3E75877A2888D88A_564> Method_2_3FB7760ADA66821B(::System::Int32 a1, ::System::Int32 a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_564>(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_METHOD_2_3FB7760ADA66821B_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::Struct_2_3E75877A2888D88A_564 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3E75877A2888D88A_564(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_564_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
