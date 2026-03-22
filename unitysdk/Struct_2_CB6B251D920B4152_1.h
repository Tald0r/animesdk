#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_CB6B251D920B4152_1_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_CB6B251D920B4152_1_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x16807F20)
#define STRUCT_2_CB6B251D920B4152_1_METHOD_2_629EAEFF24E5785A_OFFSET UNITYSDK_OFFSET(0x76D5D0)
#define STRUCT_2_CB6B251D920B4152_1_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x68C590)
#define STRUCT_2_CB6B251D920B4152_1_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x16807FC0)
#define STRUCT_2_CB6B251D920B4152_1_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x68C680)
#define STRUCT_2_CB6B251D920B4152_1_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x76D5E0)
#define STRUCT_2_CB6B251D920B4152_1___INIT_OFFSET UNITYSDK_OFFSET(0x76D5B0)

inline static constexpr unsigned int Struct_2_CB6B251D920B4152_1_TypeDefinitionIndex = 10420;

struct alignas(8) Struct_2_CB6B251D920B4152_1
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_1_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_1___INIT_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::UInt32>* Method_2_629EAEFF24E5785A()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_1_METHOD_2_629EAEFF24E5785A_OFFSET))(this);
	}

	static ::Struct_2_CB6B251D920B4152_1 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_CB6B251D920B4152_1 a2)
	{
		return ((::Struct_2_CB6B251D920B4152_1(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_CB6B251D920B4152_1))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_1_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_1_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	static ::Struct_2_CB6B251D920B4152_1 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_CB6B251D920B4152_1(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_1_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Struct_2_CB6B251D920B4152_1 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_CB6B251D920B4152_1(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_1_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_58DF5669875F2C66_89> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_58DF5669875F2C66_89>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_1_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/
};
