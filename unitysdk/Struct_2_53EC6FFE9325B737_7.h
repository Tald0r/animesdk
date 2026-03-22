#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_53EC6FFE9325B737_7_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_53EC6FFE9325B737_7_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x68C960)
#define STRUCT_2_53EC6FFE9325B737_7_METHOD_2_67D8B707BE896A69_OFFSET UNITYSDK_OFFSET(0x168BAD70)
#define STRUCT_2_53EC6FFE9325B737_7_METHOD_2_E079D6D1E2324B89_1_OFFSET UNITYSDK_OFFSET(0x68C910)
#define STRUCT_2_53EC6FFE9325B737_7_METHOD_2_E079D6D1E2324B89_2_OFFSET UNITYSDK_OFFSET(0x6E8CD0)
#define STRUCT_2_53EC6FFE9325B737_7_METHOD_2_E079D6D1E2324B89_OFFSET UNITYSDK_OFFSET(0x6E94A0)
#define STRUCT_2_53EC6FFE9325B737_7___INIT_OFFSET UNITYSDK_OFFSET(0x68C7C0)

inline static constexpr unsigned int Struct_2_53EC6FFE9325B737_7_TypeDefinitionIndex = 13022;

struct alignas(8) Struct_2_53EC6FFE9325B737_7
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_7_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_7___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E079D6D1E2324B89()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_7_METHOD_2_E079D6D1E2324B89_OFFSET))(this);
	}

	::System::Int32 Method_2_E079D6D1E2324B89_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_7_METHOD_2_E079D6D1E2324B89_1_OFFSET))(this);
	}

	/*
	static ::System::Nullable_1<::Struct_2_53EC6FFE9325B737_7> Method_2_67D8B707BE896A69(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::FlatBuffers::ByteBuffer* a4, ::System::Int32& a5)
	{
		return ((::System::Nullable_1<::Struct_2_53EC6FFE9325B737_7>(*)(::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_7_METHOD_2_67D8B707BE896A69_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	::System::Int32 Method_2_E079D6D1E2324B89_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_7_METHOD_2_E079D6D1E2324B89_2_OFFSET))(this);
	}

	::Struct_2_53EC6FFE9325B737_7 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_53EC6FFE9325B737_7(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_53EC6FFE9325B737_7_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
