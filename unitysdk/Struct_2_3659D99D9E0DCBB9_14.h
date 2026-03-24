#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_3659D99D9E0DCBB9_14_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_3659D99D9E0DCBB9_14_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x699280)
#define STRUCT_2_3659D99D9E0DCBB9_14_METHOD_2_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0x7B33F0)
#define STRUCT_2_3659D99D9E0DCBB9_14_METHOD_2_FAE9C4050544FE63_2_OFFSET UNITYSDK_OFFSET(0x7B3420)
#define STRUCT_2_3659D99D9E0DCBB9_14_METHOD_2_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x7B33C0)
#define STRUCT_2_3659D99D9E0DCBB9_14___INIT_OFFSET UNITYSDK_OFFSET(0x699120)

inline static constexpr unsigned int Struct_2_3659D99D9E0DCBB9_14_TypeDefinitionIndex = 17765;

struct alignas(8) Struct_2_3659D99D9E0DCBB9_14
{
	::FlatBuffers::Struct Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_14_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_14___INIT_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_FAE9C4050544FE63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_14_METHOD_2_FAE9C4050544FE63_OFFSET))(this);
	}

	::System::Single Method_2_FAE9C4050544FE63_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_14_METHOD_2_FAE9C4050544FE63_1_OFFSET))(this);
	}

	::System::Single Method_2_FAE9C4050544FE63_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_14_METHOD_2_FAE9C4050544FE63_2_OFFSET))(this);
	}

	::Struct_2_3659D99D9E0DCBB9_14 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3659D99D9E0DCBB9_14(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_14_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
