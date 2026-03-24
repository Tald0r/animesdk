#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61;
class Class_2_451CACB9D9D8D4D6;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_451CACB9D9D8D4D6_STRUCT_2_4CD098379ED14FA1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x53A2C0)
#define CLASS_2_451CACB9D9D8D4D6_STRUCT_2_4CD098379ED14FA1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_451CACB9D9D8D4D6_Struct_2_4CD098379ED14FA1_TypeDefinitionIndex = 63664;

struct alignas(8) Class_2_451CACB9D9D8D4D6_Struct_2_4CD098379ED14FA1
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61*>*>> Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x30
	::Class_2_451CACB9D9D8D4D6* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_451CACB9D9D8D4D6_STRUCT_2_4CD098379ED14FA1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_451CACB9D9D8D4D6_STRUCT_2_4CD098379ED14FA1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
