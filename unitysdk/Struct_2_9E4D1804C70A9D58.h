#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_0028CB2256824C0F_OFFSET UNITYSDK_OFFSET(0x95C05B0)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_2E700FB2B007CDD3_OFFSET UNITYSDK_OFFSET(0x2CB170)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_326B5ADA84F231E8_OFFSET UNITYSDK_OFFSET(0x95C03E0)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_338DC0B1B0020407_OFFSET UNITYSDK_OFFSET(0x95C0480)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x364F70)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x2C3980)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_A3D6A80F8EB1588B_OFFSET UNITYSDK_OFFSET(0x95C02F0)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_B58BC6045ACAB0D9_OFFSET UNITYSDK_OFFSET(0x957FCB0)
#define STRUCT_2_9E4D1804C70A9D58_METHOD_2_C8BA04CF72E4997A_OFFSET UNITYSDK_OFFSET(0x2CB080)
#define STRUCT_2_9E4D1804C70A9D58_TOSTRING_OFFSET UNITYSDK_OFFSET(0x364F60)
#define STRUCT_2_9E4D1804C70A9D58__CTOR_1_OFFSET UNITYSDK_OFFSET(0x364F40)
#define STRUCT_2_9E4D1804C70A9D58__CTOR_OFFSET UNITYSDK_OFFSET(0x30DE90)

inline static constexpr unsigned int Struct_2_9E4D1804C70A9D58_TypeDefinitionIndex = 78382;

struct alignas(8) Struct_2_9E4D1804C70A9D58
{
	::System::String* Field_2_0; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58__CTOR_1_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_TOSTRING_OFFSET))(this);
	}

	/*
	static ::Struct_2_9E4D1804C70A9D58 Method_2_A3D6A80F8EB1588B(::System::ValueTuple_2<::System::String*, ::System::String*> a1)
	{
		return ((::Struct_2_9E4D1804C70A9D58(*)(::System::ValueTuple_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_A3D6A80F8EB1588B_OFFSET))(a1);
	}
	*/

	static ::Struct_2_9E4D1804C70A9D58 Method_2_326B5ADA84F231E8(::Il2CppArray<::System::String*>* a1)
	{
		return ((::Struct_2_9E4D1804C70A9D58(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_326B5ADA84F231E8_OFFSET))(a1);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E700FB2B007CDD3(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_2E700FB2B007CDD3_OFFSET))(this, a1);
	}

	/*
	static ::Struct_2_9E4D1804C70A9D58 Method_2_338DC0B1B0020407(::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*> a1)
	{
		return ((::Struct_2_9E4D1804C70A9D58(*)(::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_338DC0B1B0020407_OFFSET))(a1);
	}
	*/

	static ::Struct_2_9E4D1804C70A9D58 Method_2_B58BC6045ACAB0D9(::System::String* a1)
	{
		return ((::Struct_2_9E4D1804C70A9D58(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_B58BC6045ACAB0D9_OFFSET))(a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_2_C8BA04CF72E4997A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_C8BA04CF72E4997A_OFFSET))(this);
	}

	/*
	static ::Struct_2_9E4D1804C70A9D58 Method_2_0028CB2256824C0F(::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::System::String*> a1)
	{
		return ((::Struct_2_9E4D1804C70A9D58(*)(::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_0028CB2256824C0F_OFFSET))(a1);
	}
	*/

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9E4D1804C70A9D58_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
