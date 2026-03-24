#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_8D3BE177805F6B96_4_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_8D3BE177805F6B96_4_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x15A85070)
#define STRUCT_2_8D3BE177805F6B96_4_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x6993C0)
#define STRUCT_2_8D3BE177805F6B96_4_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x15A85110)
#define STRUCT_2_8D3BE177805F6B96_4_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x699310)
#define STRUCT_2_8D3BE177805F6B96_4_METHOD_2_D7C3A751BD98CB47_OFFSET UNITYSDK_OFFSET(0x784840)
#define STRUCT_2_8D3BE177805F6B96_4_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x784850)
#define STRUCT_2_8D3BE177805F6B96_4_METHOD_2_F49C8B0DCC44919A_OFFSET UNITYSDK_OFFSET(0x784890)
#define STRUCT_2_8D3BE177805F6B96_4___INIT_OFFSET UNITYSDK_OFFSET(0x784820)

inline static constexpr unsigned int Struct_2_8D3BE177805F6B96_4_TypeDefinitionIndex = 15407;

struct alignas(8) Struct_2_8D3BE177805F6B96_4
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4___INIT_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_53EC6FFE9325B737_5> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_53EC6FFE9325B737_5>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_D7C3A751BD98CB47()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4_METHOD_2_D7C3A751BD98CB47_OFFSET))(this);
	}

	static ::Struct_2_8D3BE177805F6B96_4 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_8D3BE177805F6B96_4 a2)
	{
		return ((::Struct_2_8D3BE177805F6B96_4(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_8D3BE177805F6B96_4))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	static ::Struct_2_8D3BE177805F6B96_4 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_8D3BE177805F6B96_4(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Struct_2_8D3BE177805F6B96_4 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_8D3BE177805F6B96_4(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	/*
	::System::Nullable_1<::Struct_2_53EC6FFE9325B737_5> Method_2_F49C8B0DCC44919A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32& a3)
	{
		return ((::System::Nullable_1<::Struct_2_53EC6FFE9325B737_5>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_8D3BE177805F6B96_4_METHOD_2_F49C8B0DCC44919A_OFFSET))(this, a1, a2, a3);
	}
	*/
};
