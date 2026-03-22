#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define STRUCT_2_58DF5669875F2C66_65_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_58DF5669875F2C66_65_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x68C960)
#define STRUCT_2_58DF5669875F2C66_65_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x16789670)
#define STRUCT_2_58DF5669875F2C66_65_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x167896D0)
#define STRUCT_2_58DF5669875F2C66_65_METHOD_2_E079D6D1E2324B89_OFFSET UNITYSDK_OFFSET(0x69CEC0)
#define STRUCT_2_58DF5669875F2C66_65___INIT_OFFSET UNITYSDK_OFFSET(0x68C7C0)

inline static constexpr unsigned int Struct_2_58DF5669875F2C66_65_TypeDefinitionIndex = 10235;

struct alignas(8) Struct_2_58DF5669875F2C66_65
{
	::FlatBuffers::Table Field_2_0; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_65_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_65___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_E079D6D1E2324B89()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_65_METHOD_2_E079D6D1E2324B89_OFFSET))(this);
	}

	::Struct_2_58DF5669875F2C66_65 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_58DF5669875F2C66_65(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_65_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_58DF5669875F2C66_65 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_58DF5669875F2C66_65 a2)
	{
		return ((::Struct_2_58DF5669875F2C66_65(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_58DF5669875F2C66_65))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_65_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	static ::Struct_2_58DF5669875F2C66_65 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_58DF5669875F2C66_65(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_58DF5669875F2C66_65_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}
};
