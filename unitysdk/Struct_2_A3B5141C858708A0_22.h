#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_A3B5141C858708A0_22_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_A3B5141C858708A0_22_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x16BA1CD0)
#define STRUCT_2_A3B5141C858708A0_22_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x16BA1C60)
#define STRUCT_2_A3B5141C858708A0_22_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x699310)
#define STRUCT_2_A3B5141C858708A0_22_METHOD_2_D7C3A751BD98CB47_OFFSET UNITYSDK_OFFSET(0x7A3D20)
#define STRUCT_2_A3B5141C858708A0_22_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x7A3CE0)
#define STRUCT_2_A3B5141C858708A0_22___INIT_OFFSET UNITYSDK_OFFSET(0x7A3CC0)

inline static constexpr unsigned int Struct_2_A3B5141C858708A0_22_TypeDefinitionIndex = 17346;

struct alignas(8) Struct_2_A3B5141C858708A0_22
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_22_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_22___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_22_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::Struct_2_A3B5141C858708A0_22 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_A3B5141C858708A0_22(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_22_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_A3B5141C858708A0_22 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_A3B5141C858708A0_22(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_22_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_D7C3A751BD98CB47()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_22_METHOD_2_D7C3A751BD98CB47_OFFSET))(this);
	}

	static ::Struct_2_A3B5141C858708A0_22 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_A3B5141C858708A0_22 a2)
	{
		return ((::Struct_2_A3B5141C858708A0_22(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_A3B5141C858708A0_22))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_22_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}
};
