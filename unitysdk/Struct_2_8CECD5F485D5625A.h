#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BE9205D119086684.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_8CECD5F485D5625A__CTOR_OFFSET UNITYSDK_OFFSET(0x76EA90)

inline static constexpr unsigned int Struct_2_8CECD5F485D5625A_TypeDefinitionIndex = 12236;

struct alignas(8) Struct_2_8CECD5F485D5625A
{
	::System::Collections::Generic::List_1<::Struct_2_BE9205D119086684>* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_8CECD5F485D5625A__CTOR_OFFSET))(this, a1);
	}
};
