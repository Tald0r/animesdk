#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_2342ECCCD6758DCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x34BC70)
#define STRUCT_2_2342ECCCD6758DCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x34BC40)
#define STRUCT_2_2342ECCCD6758DCF_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x34BCF0)
#define STRUCT_2_2342ECCCD6758DCF_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x34BC80)

inline static constexpr unsigned int Struct_2_2342ECCCD6758DCF_TypeDefinitionIndex = 53006;

struct alignas(8) Struct_2_2342ECCCD6758DCF
{
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x2C

	::System::Boolean Equals(::Struct_2_2342ECCCD6758DCF a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2342ECCCD6758DCF))((::PBYTE)hIl2Cpp + STRUCT_2_2342ECCCD6758DCF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_2342ECCCD6758DCF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_2342ECCCD6758DCF_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2342ECCCD6758DCF_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
