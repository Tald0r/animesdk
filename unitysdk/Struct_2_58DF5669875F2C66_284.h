#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_284_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_58DF5669875F2C66_284_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x699280)
#define STRUCT_2_58DF5669875F2C66_284_METHOD_2_A93CA8A3372168B2_OFFSET UNITYSDK_OFFSET(0x6CB3E0)
#define STRUCT_2_58DF5669875F2C66_284_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x699DA0)
#define STRUCT_2_58DF5669875F2C66_284_METHOD_2_E079D6D1E2324B89_OFFSET UNITYSDK_OFFSET(0x699230)
#define STRUCT_2_58DF5669875F2C66_284_METHOD_2_EBB25088DA611382_OFFSET UNITYSDK_OFFSET(0x69D9C0)
#define STRUCT_2_58DF5669875F2C66_284_METHOD_2_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x69AF50)
#define STRUCT_2_58DF5669875F2C66_284___INIT_OFFSET UNITYSDK_OFFSET(0x699120)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_284_TypeDefinitionIndex = 17823;

struct alignas(8) Struct_2_58DF5669875F2C66_284
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_284_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_284___INIT_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_284_METHOD_2_EFB6D6A58777DAF3_OFFSET))(this);
	}

	::System::Single Method_2_EBB25088DA611382(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_284_METHOD_2_EBB25088DA611382_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_284_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::Struct_2_58DF5669875F2C66_284 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_284(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_284_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E079D6D1E2324B89()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_284_METHOD_2_E079D6D1E2324B89_OFFSET))(this);
	}

	::System::Single Method_2_A93CA8A3372168B2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_284_METHOD_2_A93CA8A3372168B2_OFFSET))(this);
	}
};
