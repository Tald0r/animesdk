#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_11ACCE20EE4308E7.h"
#include "unitysdk/Enum_3_F0CC78A611F0A573.h"
#include "unitysdk/Struct_2_1A37120368FD2FC8_3.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_E2D404E37489DACE_METHOD_2_1F71629802500E84_OFFSET UNITYSDK_OFFSET(0x366C30)
#define STRUCT_2_E2D404E37489DACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FE6760)

inline static constexpr unsigned int Struct_2_E2D404E37489DACE_TypeDefinitionIndex = 57097;

struct alignas(8) Struct_2_E2D404E37489DACE
{
	static ::Struct_2_E2D404E37489DACE* StaticGet_Field_2_1()
	{
		return (::Struct_2_E2D404E37489DACE*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_E2D404E37489DACE_TypeDefinitionIndex)->GetStaticField(0x464D0);
	}
	::System::Collections::Generic::List_1<::Struct_2_1A37120368FD2FC8_3>* Field_2_0; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E2D404E37489DACE__CCTOR_OFFSET))();
	}

	::System::Void Method_2_1F71629802500E84(::System::Int32 a1, ::Enum_3_11ACCE20EE4308E7 a2, ::Enum_3_F0CC78A611F0A573 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_11ACCE20EE4308E7, ::Enum_3_F0CC78A611F0A573))((::PBYTE)hIl2Cpp + STRUCT_2_E2D404E37489DACE_METHOD_2_1F71629802500E84_OFFSET))(this, a1, a2, a3);
	}
};
