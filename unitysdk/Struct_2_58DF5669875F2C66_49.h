#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_49_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_58DF5669875F2C66_49_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x68C960)
#define STRUCT_2_58DF5669875F2C66_49_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x690660)
#define STRUCT_2_58DF5669875F2C66_49_METHOD_2_C03F8D372358EB70_OFFSET UNITYSDK_OFFSET(0x76E5E0)
#define STRUCT_2_58DF5669875F2C66_49_METHOD_2_E079D6D1E2324B89_1_OFFSET UNITYSDK_OFFSET(0x68C7D0)
#define STRUCT_2_58DF5669875F2C66_49_METHOD_2_E079D6D1E2324B89_OFFSET UNITYSDK_OFFSET(0x68C910)
#define STRUCT_2_58DF5669875F2C66_49_METHOD_2_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x68CBA0)
#define STRUCT_2_58DF5669875F2C66_49___INIT_OFFSET UNITYSDK_OFFSET(0x68C7C0)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_49_TypeDefinitionIndex = 10092;

struct alignas(8) Struct_2_58DF5669875F2C66_49
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_49_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_49___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_49_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::System::Int32 Method_2_E079D6D1E2324B89()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_49_METHOD_2_E079D6D1E2324B89_OFFSET))(this);
	}

	::Struct_2_58DF5669875F2C66_49 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_49(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_49_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E079D6D1E2324B89_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_49_METHOD_2_E079D6D1E2324B89_1_OFFSET))(this);
	}

	::System::String* Method_2_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_49_METHOD_2_EFB6D6A58777DAF3_OFFSET))(this);
	}

	/*
	::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_5> Method_2_C03F8D372358EB70(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_5>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_49_METHOD_2_C03F8D372358EB70_OFFSET))(this, a1);
	}
	*/
};
