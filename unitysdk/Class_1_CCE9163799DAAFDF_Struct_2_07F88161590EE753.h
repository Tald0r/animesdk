#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Foundation/ObjectPool_1_PooledObject.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_CCE9163799DAAFDF_STRUCT_2_07F88161590EE753_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35AE00)
#define CLASS_1_CCE9163799DAAFDF_STRUCT_2_07F88161590EE753_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_CCE9163799DAAFDF_Struct_2_07F88161590EE753_TypeDefinitionIndex = 44445;

struct alignas(8) Class_1_CCE9163799DAAFDF_Struct_2_07F88161590EE753
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_0_16E4307DCC419505_7*> Field_2_4; // 0x10
	::Foundation::ObjectPool_1_PooledObject<::System::Collections::Generic::List_1<::System::UInt32>*> Field_2_3; // 0x28
	::System::Threading::CancellationToken Field_2_2; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x40
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF_STRUCT_2_07F88161590EE753_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF_STRUCT_2_07F88161590EE753_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
