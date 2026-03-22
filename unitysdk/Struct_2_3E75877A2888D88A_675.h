#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_3E75877A2888D88A_675_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_3E75877A2888D88A_675_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x68C960)
#define STRUCT_2_3E75877A2888D88A_675_METHOD_2_3FB7760ADA66821B_OFFSET UNITYSDK_OFFSET(0x16A79590)
#define STRUCT_2_3E75877A2888D88A_675_METHOD_2_E079D6D1E2324B89_1_OFFSET UNITYSDK_OFFSET(0x68C910)
#define STRUCT_2_3E75877A2888D88A_675_METHOD_2_E079D6D1E2324B89_2_OFFSET UNITYSDK_OFFSET(0x68C7D0)
#define STRUCT_2_3E75877A2888D88A_675_METHOD_2_E079D6D1E2324B89_OFFSET UNITYSDK_OFFSET(0x68C820)
#define STRUCT_2_3E75877A2888D88A_675___INIT_OFFSET UNITYSDK_OFFSET(0x68C7C0)

inline static constexpr unsigned int Struct_2_3E75877A2888D88A_675_TypeDefinitionIndex = 12379;

struct alignas(8) Struct_2_3E75877A2888D88A_675
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_675_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_675___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E079D6D1E2324B89()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_675_METHOD_2_E079D6D1E2324B89_OFFSET))(this);
	}

	::System::Int32 Method_2_E079D6D1E2324B89_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_675_METHOD_2_E079D6D1E2324B89_1_OFFSET))(this);
	}

	::Struct_2_3E75877A2888D88A_675 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_3E75877A2888D88A_675(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_675_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	/*
	static ::System::Nullable_1<::Struct_2_3E75877A2888D88A_675> Method_2_3FB7760ADA66821B(::System::Int32 a1, ::System::Int32 a2, ::FlatBuffers::ByteBuffer* a3, ::System::Int32& a4)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_675>(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_675_METHOD_2_3FB7760ADA66821B_OFFSET))(a1, a2, a3, a4);
	}
	*/

	::System::Int32 Method_2_E079D6D1E2324B89_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E75877A2888D88A_675_METHOD_2_E079D6D1E2324B89_2_OFFSET))(this);
	}
};
