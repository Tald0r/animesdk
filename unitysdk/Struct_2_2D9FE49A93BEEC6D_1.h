#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_2D9FE49A93BEEC6D_1_METHOD_2_3E703A8C176575ED_OFFSET UNITYSDK_OFFSET(0xB877880)
#define STRUCT_2_2D9FE49A93BEEC6D_1_METHOD_2_86CD02F60F681DF1_OFFSET UNITYSDK_OFFSET(0xB877700)
#define STRUCT_2_2D9FE49A93BEEC6D_1_METHOD_2_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x3AEF60)
#define STRUCT_2_2D9FE49A93BEEC6D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x3AEF50)

inline static constexpr unsigned int Struct_2_2D9FE49A93BEEC6D_1_TypeDefinitionIndex = 62216;

struct alignas(4) Struct_2_2D9FE49A93BEEC6D_1
{
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_86CD02F60F681DF1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D_1_METHOD_2_86CD02F60F681DF1_OFFSET))(a1);
	}

	::System::Boolean Method_2_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D_1_METHOD_2_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_2D9FE49A93BEEC6D_1>* Method_2_3E703A8C176575ED(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_2D9FE49A93BEEC6D_1>*(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D_1_METHOD_2_3E703A8C176575ED_OFFSET))(a1);
	}
};
