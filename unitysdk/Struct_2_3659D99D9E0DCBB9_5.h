#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_3659D99D9E0DCBB9_5_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_3659D99D9E0DCBB9_5_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x68C960)
#define STRUCT_2_3659D99D9E0DCBB9_5_METHOD_2_63094002BA6D39A9_1_OFFSET UNITYSDK_OFFSET(0x69C010)
#define STRUCT_2_3659D99D9E0DCBB9_5_METHOD_2_63094002BA6D39A9_2_OFFSET UNITYSDK_OFFSET(0x6F80A0)
#define STRUCT_2_3659D99D9E0DCBB9_5_METHOD_2_63094002BA6D39A9_OFFSET UNITYSDK_OFFSET(0x69C040)
#define STRUCT_2_3659D99D9E0DCBB9_5___INIT_OFFSET UNITYSDK_OFFSET(0x68C7C0)

inline static constexpr unsigned int Struct_2_3659D99D9E0DCBB9_5_TypeDefinitionIndex = 13416;

struct alignas(8) Struct_2_3659D99D9E0DCBB9_5
{
	::FlatBuffers::Struct Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_5_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_5___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_63094002BA6D39A9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_5_METHOD_2_63094002BA6D39A9_OFFSET))(this);
	}

	::System::Int32 Method_2_63094002BA6D39A9_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_5_METHOD_2_63094002BA6D39A9_1_OFFSET))(this);
	}

	::System::Int32 Method_2_63094002BA6D39A9_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_5_METHOD_2_63094002BA6D39A9_2_OFFSET))(this);
	}

	::Struct_2_3659D99D9E0DCBB9_5 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3659D99D9E0DCBB9_5(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3659D99D9E0DCBB9_5_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
