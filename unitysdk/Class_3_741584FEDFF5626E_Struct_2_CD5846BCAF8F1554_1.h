#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_741584FEDFF5626E;
class Class_3_741584FEDFF5626E_Class_1_9DC8B3548AE0FFCC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_741584FEDFF5626E_STRUCT_2_CD5846BCAF8F1554_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x36DDE0)
#define CLASS_3_741584FEDFF5626E_STRUCT_2_CD5846BCAF8F1554_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_3_741584FEDFF5626E_Struct_2_CD5846BCAF8F1554_1_TypeDefinitionIndex = 54423;

struct alignas(8) Class_3_741584FEDFF5626E_Struct_2_CD5846BCAF8F1554_1
{
	::Class_3_741584FEDFF5626E_Class_1_9DC8B3548AE0FFCC* Field_2_3; // 0x10
	::System::Threading::CancellationToken Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x20
	::Class_3_741584FEDFF5626E* Field_2_2; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_741584FEDFF5626E_STRUCT_2_CD5846BCAF8F1554_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_741584FEDFF5626E_STRUCT_2_CD5846BCAF8F1554_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
