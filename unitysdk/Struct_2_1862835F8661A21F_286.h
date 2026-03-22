#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_1862835F8661A21F_286_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_1862835F8661A21F_286_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x13C8DC90)
#define STRUCT_2_1862835F8661A21F_286_METHOD_2_6C1B0468CEE19470_OFFSET UNITYSDK_OFFSET(0x7114D0)
#define STRUCT_2_1862835F8661A21F_286_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x13C8DC20)
#define STRUCT_2_1862835F8661A21F_286_METHOD_2_B84F1C9E816AD9C0_OFFSET UNITYSDK_OFFSET(0x68C680)
#define STRUCT_2_1862835F8661A21F_286_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x7114E0)
#define STRUCT_2_1862835F8661A21F_286___INIT_OFFSET UNITYSDK_OFFSET(0x7114B0)

inline static constexpr unsigned int Struct_2_1862835F8661A21F_286_TypeDefinitionIndex = 11483;

struct alignas(8) Struct_2_1862835F8661A21F_286
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_286_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_286___INIT_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_1862835F8661A21F_286 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_1862835F8661A21F_286(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_286_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::System::Int32 Method_2_B84F1C9E816AD9C0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_286_METHOD_2_B84F1C9E816AD9C0_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_2_6C1B0468CEE19470()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_286_METHOD_2_6C1B0468CEE19470_OFFSET))(this);
	}

	static ::Struct_2_1862835F8661A21F_286 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_1862835F8661A21F_286 a2)
	{
		return ((::Struct_2_1862835F8661A21F_286(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_1862835F8661A21F_286))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_286_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	::Struct_2_1862835F8661A21F_286 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_1862835F8661A21F_286(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_286_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}
};
