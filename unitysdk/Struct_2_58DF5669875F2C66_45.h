#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define STRUCT_2_58DF5669875F2C66_45_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_58DF5669875F2C66_45_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x699280)
#define STRUCT_2_58DF5669875F2C66_45_METHOD_2_E079D6D1E2324B89_1_OFFSET UNITYSDK_OFFSET(0x69BC00)
#define STRUCT_2_58DF5669875F2C66_45_METHOD_2_E079D6D1E2324B89_2_OFFSET UNITYSDK_OFFSET(0x69C940)
#define STRUCT_2_58DF5669875F2C66_45_METHOD_2_E079D6D1E2324B89_3_OFFSET UNITYSDK_OFFSET(0x699600)
#define STRUCT_2_58DF5669875F2C66_45_METHOD_2_E079D6D1E2324B89_OFFSET UNITYSDK_OFFSET(0x699230)
#define STRUCT_2_58DF5669875F2C66_45_METHOD_2_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x69AF50)
#define STRUCT_2_58DF5669875F2C66_45___INIT_OFFSET UNITYSDK_OFFSET(0x699120)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_45_TypeDefinitionIndex = 10063;

struct alignas(8) Struct_2_58DF5669875F2C66_45
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_45_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_45___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E079D6D1E2324B89()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_45_METHOD_2_E079D6D1E2324B89_OFFSET))(this);
	}

	::System::Int32 Method_2_E079D6D1E2324B89_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_45_METHOD_2_E079D6D1E2324B89_1_OFFSET))(this);
	}

	::System::String* Method_2_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_45_METHOD_2_EFB6D6A58777DAF3_OFFSET))(this);
	}

	::System::Int32 Method_2_E079D6D1E2324B89_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_45_METHOD_2_E079D6D1E2324B89_2_OFFSET))(this);
	}

	::Struct_2_58DF5669875F2C66_45 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_45(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_45_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E079D6D1E2324B89_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_45_METHOD_2_E079D6D1E2324B89_3_OFFSET))(this);
	}
};
