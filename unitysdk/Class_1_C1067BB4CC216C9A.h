#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_80565EDC4420BFE0.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C1067BB4CC216C9A__CTOR_OFFSET UNITYSDK_OFFSET(0x79EFB80)

inline static constexpr unsigned int Class_1_C1067BB4CC216C9A_TypeDefinitionIndex = 49318;

class Class_1_C1067BB4CC216C9A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Enum_3_80565EDC4420BFE0>* Field_1_4; // 0x18
	::Enum_3_80565EDC4420BFE0 Field_1_3; // 0x20
	::System::Boolean Field_1_0; // 0x24
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1067BB4CC216C9A__CTOR_OFFSET))(this);
	}
};
