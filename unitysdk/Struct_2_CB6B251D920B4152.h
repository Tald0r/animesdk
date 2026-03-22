#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_CB6B251D920B4152_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_CB6B251D920B4152_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x1695D730)
#define STRUCT_2_CB6B251D920B4152_METHOD_2_55FBD218F97B8020_OFFSET UNITYSDK_OFFSET(0x772AF0)
#define STRUCT_2_CB6B251D920B4152_METHOD_2_629EAEFF24E5785A_OFFSET UNITYSDK_OFFSET(0x772B50)
#define STRUCT_2_CB6B251D920B4152_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x68C590)
#define STRUCT_2_CB6B251D920B4152_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x1695D6C0)
#define STRUCT_2_CB6B251D920B4152_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x68C680)
#define STRUCT_2_CB6B251D920B4152_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x772B10)
#define STRUCT_2_CB6B251D920B4152___INIT_OFFSET UNITYSDK_OFFSET(0x772AD0)

inline static constexpr unsigned int Struct_2_CB6B251D920B4152_TypeDefinitionIndex = 13777;

struct alignas(8) Struct_2_CB6B251D920B4152
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152___INIT_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_CB6B251D920B4152 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_CB6B251D920B4152(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	static ::Struct_2_CB6B251D920B4152 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_CB6B251D920B4152 a2)
	{
		return ((::Struct_2_CB6B251D920B4152(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_CB6B251D920B4152))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_C7B40A7D48766478> Method_2_55FBD218F97B8020(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Nullable_1<::Struct_2_C7B40A7D48766478>(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_METHOD_2_55FBD218F97B8020_OFFSET))(this, a1, a2);
	}
	*/

	::Struct_2_CB6B251D920B4152 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_CB6B251D920B4152(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_2_629EAEFF24E5785A()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_METHOD_2_629EAEFF24E5785A_OFFSET))(this);
	}

	/*
	::System::Nullable_1<::Struct_2_C7B40A7D48766478> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_C7B40A7D48766478>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CB6B251D920B4152_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/
};
