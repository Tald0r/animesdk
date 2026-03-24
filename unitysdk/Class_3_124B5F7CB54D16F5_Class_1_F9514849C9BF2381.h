#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5262CF510D89C2E1_Struct_2_0839504A496058D2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_124B5F7CB54D16F5_CLASS_1_F9514849C9BF2381_METHOD_1_00E95FA340C63433_OFFSET UNITYSDK_OFFSET(0xB67CF90)
#define CLASS_3_124B5F7CB54D16F5_CLASS_1_F9514849C9BF2381__CTOR_OFFSET UNITYSDK_OFFSET(0xB67CF80)

inline static constexpr unsigned int Class_3_124B5F7CB54D16F5_Class_1_F9514849C9BF2381_TypeDefinitionIndex = 45325;

class Class_3_124B5F7CB54D16F5_Class_1_F9514849C9BF2381 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_124B5F7CB54D16F5_CLASS_1_F9514849C9BF2381__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_00E95FA340C63433(::Class_3_5262CF510D89C2E1_Struct_2_0839504A496058D2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_5262CF510D89C2E1_Struct_2_0839504A496058D2))((::PBYTE)hIl2Cpp + CLASS_3_124B5F7CB54D16F5_CLASS_1_F9514849C9BF2381_METHOD_1_00E95FA340C63433_OFFSET))(this, a1);
	}
};
