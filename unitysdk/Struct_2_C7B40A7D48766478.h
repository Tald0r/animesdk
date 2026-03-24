#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_C7B40A7D48766478_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_C7B40A7D48766478_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x699280)
#define STRUCT_2_C7B40A7D48766478_METHOD_2_45D08CB24169181D_OFFSET UNITYSDK_OFFSET(0x699230)
#define STRUCT_2_C7B40A7D48766478_METHOD_2_6A8CFA8B152802D3_OFFSET UNITYSDK_OFFSET(0x171F2E80)
#define STRUCT_2_C7B40A7D48766478_METHOD_2_7998FE9400D1767D_OFFSET UNITYSDK_OFFSET(0x736D70)
#define STRUCT_2_C7B40A7D48766478___INIT_OFFSET UNITYSDK_OFFSET(0x699120)

inline static constexpr unsigned int Struct_2_C7B40A7D48766478_TypeDefinitionIndex = 13539;

struct alignas(8) Struct_2_C7B40A7D48766478
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C7B40A7D48766478_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_C7B40A7D48766478___INIT_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_45D08CB24169181D()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C7B40A7D48766478_METHOD_2_45D08CB24169181D_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_C7B40A7D48766478> Method_2_6A8CFA8B152802D3(::System::Int32 a1, ::System::UInt32 a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_C7B40A7D48766478>(*)(::System::Int32, ::System::UInt32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_C7B40A7D48766478_METHOD_2_6A8CFA8B152802D3_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::UInt64 Method_2_7998FE9400D1767D()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C7B40A7D48766478_METHOD_2_7998FE9400D1767D_OFFSET))(this);
	}

	::Struct_2_C7B40A7D48766478 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_C7B40A7D48766478(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_C7B40A7D48766478_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
