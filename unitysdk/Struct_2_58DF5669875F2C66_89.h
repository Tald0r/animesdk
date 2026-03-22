#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_89_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_58DF5669875F2C66_89_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x68C960)
#define STRUCT_2_58DF5669875F2C66_89_METHOD_2_45D08CB24169181D_OFFSET UNITYSDK_OFFSET(0x68C910)
#define STRUCT_2_58DF5669875F2C66_89_METHOD_2_7998FE9400D1767D_OFFSET UNITYSDK_OFFSET(0x6F3290)
#define STRUCT_2_58DF5669875F2C66_89_METHOD_2_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x6E8600)
#define STRUCT_2_58DF5669875F2C66_89_METHOD_2_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x68D1A0)
#define STRUCT_2_58DF5669875F2C66_89___INIT_OFFSET UNITYSDK_OFFSET(0x68C7C0)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_89_TypeDefinitionIndex = 13231;

struct alignas(8) Struct_2_58DF5669875F2C66_89
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_89_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_89___INIT_OFFSET))(this, a1, a2);
	}

	::System::UInt64 Method_2_7998FE9400D1767D()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_89_METHOD_2_7998FE9400D1767D_OFFSET))(this);
	}

	::System::Boolean Method_2_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_89_METHOD_2_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::Struct_2_58DF5669875F2C66_89 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_89(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_89_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_89_METHOD_2_EFB6D6A58777DAF3_OFFSET))(this);
	}

	::System::UInt32 Method_2_45D08CB24169181D()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_89_METHOD_2_45D08CB24169181D_OFFSET))(this);
	}
};
