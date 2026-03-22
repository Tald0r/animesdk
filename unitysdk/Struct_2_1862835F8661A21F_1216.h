#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_1862835F8661A21F_1216_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_1862835F8661A21F_1216_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x169D0F00)
#define STRUCT_2_1862835F8661A21F_1216_METHOD_2_6C1B0468CEE19470_OFFSET UNITYSDK_OFFSET(0x775300)
#define STRUCT_2_1862835F8661A21F_1216_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x68C590)
#define STRUCT_2_1862835F8661A21F_1216_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x169D0F60)
#define STRUCT_2_1862835F8661A21F_1216_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x68C680)
#define STRUCT_2_1862835F8661A21F_1216_METHOD_2_C54EE7C400F446B0_OFFSET UNITYSDK_OFFSET(0x7752A0)
#define STRUCT_2_1862835F8661A21F_1216_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x7752C0)
#define STRUCT_2_1862835F8661A21F_1216___INIT_OFFSET UNITYSDK_OFFSET(0x775280)

inline static constexpr unsigned int Struct_2_1862835F8661A21F_1216_TypeDefinitionIndex = 17181;

struct alignas(8) Struct_2_1862835F8661A21F_1216
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216___INIT_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_3E75877A2888D88A_690> Method_2_C54EE7C400F446B0(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_690>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216_METHOD_2_C54EE7C400F446B0_OFFSET))(this, a1, a2);
	}
	*/

	::Struct_2_1862835F8661A21F_1216 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_1862835F8661A21F_1216(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	static ::Struct_2_1862835F8661A21F_1216 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_1862835F8661A21F_1216 a2)
	{
		return ((::Struct_2_1862835F8661A21F_1216(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_1862835F8661A21F_1216))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	static ::Struct_2_1862835F8661A21F_1216 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_1862835F8661A21F_1216(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Il2CppArray<::System::Int32>* Method_2_6C1B0468CEE19470()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216_METHOD_2_6C1B0468CEE19470_OFFSET))(this);
	}

	/*
	::System::Nullable_1<::Struct_2_3E75877A2888D88A_690> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_690>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1216_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/
};
