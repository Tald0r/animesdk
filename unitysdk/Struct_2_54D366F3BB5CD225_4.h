#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_54D366F3BB5CD225_4_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_54D366F3BB5CD225_4_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x68C960)
#define STRUCT_2_54D366F3BB5CD225_4_METHOD_2_5151C40048508F8C_OFFSET UNITYSDK_OFFSET(0x6EAB10)
#define STRUCT_2_54D366F3BB5CD225_4_METHOD_2_C490BAB5683EA1F7_OFFSET UNITYSDK_OFFSET(0x1345CCF0)
#define STRUCT_2_54D366F3BB5CD225_4_METHOD_2_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x68D1A0)
#define STRUCT_2_54D366F3BB5CD225_4___INIT_OFFSET UNITYSDK_OFFSET(0x68C7C0)

inline static constexpr unsigned int Struct_2_54D366F3BB5CD225_4_TypeDefinitionIndex = 16366;

struct alignas(8) Struct_2_54D366F3BB5CD225_4
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_54D366F3BB5CD225_4_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_54D366F3BB5CD225_4___INIT_OFFSET))(this, a1, a2);
	}

	/*
	static ::System::Nullable_1<::Struct_2_54D366F3BB5CD225_4> Method_2_C490BAB5683EA1F7(::System::Int32 a1, ::System::String* a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_54D366F3BB5CD225_4>(*)(::System::Int32, ::System::String*, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_54D366F3BB5CD225_4_METHOD_2_C490BAB5683EA1F7_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::Struct_2_54D366F3BB5CD225_4 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_54D366F3BB5CD225_4(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_54D366F3BB5CD225_4_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	/*
	::System::Span_1<::System::Byte> Method_2_5151C40048508F8C()
	{
		return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_54D366F3BB5CD225_4_METHOD_2_5151C40048508F8C_OFFSET))(this);
	}
	*/

	::System::String* Method_2_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_54D366F3BB5CD225_4_METHOD_2_EFB6D6A58777DAF3_OFFSET))(this);
	}
};
