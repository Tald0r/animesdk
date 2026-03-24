#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_474991D7AC310552_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_474991D7AC310552_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x1639E660)
#define STRUCT_2_474991D7AC310552_METHOD_2_61345F5279DB1E16_OFFSET UNITYSDK_OFFSET(0x796290)
#define STRUCT_2_474991D7AC310552_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x6993C0)
#define STRUCT_2_474991D7AC310552_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x1639E5F0)
#define STRUCT_2_474991D7AC310552_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x699310)
#define STRUCT_2_474991D7AC310552_METHOD_2_CDC9DB5A7BD3E262_OFFSET UNITYSDK_OFFSET(0x7962E0)
#define STRUCT_2_474991D7AC310552_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x7962A0)
#define STRUCT_2_474991D7AC310552___INIT_OFFSET UNITYSDK_OFFSET(0x796270)

inline static constexpr unsigned int Struct_2_474991D7AC310552_TypeDefinitionIndex = 12453;

struct alignas(8) Struct_2_474991D7AC310552
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552___INIT_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_474991D7AC310552 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_474991D7AC310552(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Il2CppArray<::System::UInt64>* Method_2_61345F5279DB1E16()
	{
		return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552_METHOD_2_61345F5279DB1E16_OFFSET))(this);
	}

	/*
	::System::Nullable_1<::Struct_2_56101A14A39BFA03> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_56101A14A39BFA03>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/

	::Struct_2_474991D7AC310552 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_474991D7AC310552(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_474991D7AC310552 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_474991D7AC310552 a2)
	{
		return ((::Struct_2_474991D7AC310552(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_474991D7AC310552))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	/*
	::System::Nullable_1<::Struct_2_56101A14A39BFA03> Method_2_CDC9DB5A7BD3E262(::System::UInt64 a1, ::System::Int32& a2)
	{
		return ((::System::Nullable_1<::Struct_2_56101A14A39BFA03>(*)(::PVOID, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_474991D7AC310552_METHOD_2_CDC9DB5A7BD3E262_OFFSET))(this, a1, a2);
	}
	*/
};
