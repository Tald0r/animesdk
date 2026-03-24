#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_39CEA7F613ED7FAD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_39CEA7F613ED7FAD_STRUCT_2_576EBCA9345B7851_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4491F0)
#define CLASS_2_39CEA7F613ED7FAD_STRUCT_2_576EBCA9345B7851_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x301A90)

inline static constexpr unsigned int Class_2_39CEA7F613ED7FAD_Struct_2_576EBCA9345B7851_TypeDefinitionIndex = 38927;

struct alignas(8) Class_2_39CEA7F613ED7FAD_Struct_2_576EBCA9345B7851
{
	::Class_2_39CEA7F613ED7FAD* Field_2_2; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x38
	::System::Single Field_2_3; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_STRUCT_2_576EBCA9345B7851_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_STRUCT_2_576EBCA9345B7851_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
