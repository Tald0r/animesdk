#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_45BD2670F50489A3.h"
#include "unitysdk/Struct_2_549F9DEE96E2AD16_Struct_2_3F82E75A75CDC595.h"
#include "unitysdk/System/ValueType.h"

class Class_1_2203E1F22CACEF25;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_549F9DEE96E2AD16_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B22F0)
#define STRUCT_2_549F9DEE96E2AD16_METHOD_2_415AC3B6576F5D2A_OFFSET UNITYSDK_OFFSET(0xB7D40E0)
#define STRUCT_2_549F9DEE96E2AD16_METHOD_2_4257D999C42754D2_OFFSET UNITYSDK_OFFSET(0x3B2310)
#define STRUCT_2_549F9DEE96E2AD16_METHOD_2_9B9D0B9728B95AFB_OFFSET UNITYSDK_OFFSET(0x3B2300)
#define STRUCT_2_549F9DEE96E2AD16_METHOD_2_E70A3F31E8FC0FC8_OFFSET UNITYSDK_OFFSET(0xB7D4200)
#define STRUCT_2_549F9DEE96E2AD16_METHOD_2_E9578ACB6F4562B8_OFFSET UNITYSDK_OFFSET(0xB7D4330)
#define STRUCT_2_549F9DEE96E2AD16_METHOD_2_F86D070B0FF2EC92_OFFSET UNITYSDK_OFFSET(0xB7D3E60)
#define STRUCT_2_549F9DEE96E2AD16__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7D3C70)
#define STRUCT_2_549F9DEE96E2AD16__CTOR_OFFSET UNITYSDK_OFFSET(0x3B22E0)

inline static constexpr unsigned int Struct_2_549F9DEE96E2AD16_TypeDefinitionIndex = 54024;

struct alignas(8) Struct_2_549F9DEE96E2AD16
{
	static ::System::Collections::Generic::List_1<::Struct_2_549F9DEE96E2AD16_Struct_2_3F82E75A75CDC595>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_549F9DEE96E2AD16_Struct_2_3F82E75A75CDC595>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_549F9DEE96E2AD16_TypeDefinitionIndex)->GetStaticField(0x45810);
	}
	::System::String* Field_2_1; // 0x10

	::System::Void _ctor(::System::String* a1, ::Class_1_2203E1F22CACEF25* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2203E1F22CACEF25*))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16_DISPOSE_OFFSET))(this);
	}

	/*
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_9B9D0B9728B95AFB(::System::Int32& a1, ::Enum_3_45BD2670F50489A3 a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32&, ::Enum_3_45BD2670F50489A3))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16_METHOD_2_9B9D0B9728B95AFB_OFFSET))(this, a1, a2);
	}
	*/

	static ::System::Int32 Method_2_F86D070B0FF2EC92(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16_METHOD_2_F86D070B0FF2EC92_OFFSET))(a1, a2);
	}

	/*
	::System::Boolean Method_2_4257D999C42754D2(::System::Int32& a1, ::Struct_2_60A79F822ECFC020& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::Struct_2_60A79F822ECFC020&))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16_METHOD_2_4257D999C42754D2_OFFSET))(this, a1, a2);
	}
	*/

	static ::System::String* Method_2_415AC3B6576F5D2A(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16_METHOD_2_415AC3B6576F5D2A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_2_E70A3F31E8FC0FC8(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Single(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16_METHOD_2_E70A3F31E8FC0FC8_OFFSET))(a1, a2, a3, a4);
	}

	/*
	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_E9578ACB6F4562B8(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_549F9DEE96E2AD16_METHOD_2_E9578ACB6F4562B8_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/
};
