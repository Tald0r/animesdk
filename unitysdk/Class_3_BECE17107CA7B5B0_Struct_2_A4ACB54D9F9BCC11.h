#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BECE17107CA7B5B0_Struct_2_7D9023B263F2474A.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_019870FE224FBE5A;
class Class_2_7E9CEC54C2881D42;
class Class_3_BECE17107CA7B5B0;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_BECE17107CA7B5B0_STRUCT_2_A4ACB54D9F9BCC11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x32E5E0)
#define CLASS_3_BECE17107CA7B5B0_STRUCT_2_A4ACB54D9F9BCC11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_3_BECE17107CA7B5B0_Struct_2_A4ACB54D9F9BCC11_TypeDefinitionIndex = 66122;

struct alignas(8) Class_3_BECE17107CA7B5B0_Struct_2_A4ACB54D9F9BCC11
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_7; // 0x10
	::Class_2_7E9CEC54C2881D42* Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x28
	::System::WeakReference_1<::Class_3_BECE17107CA7B5B0*>* Field_2_2; // 0x30
	::Class_1_019870FE224FBE5A* Field_2_3; // 0x38
	::Class_3_BECE17107CA7B5B0_Struct_2_7D9023B263F2474A Field_2_4; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x48
	::System::Int32 Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BECE17107CA7B5B0_STRUCT_2_A4ACB54D9F9BCC11_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_BECE17107CA7B5B0_STRUCT_2_A4ACB54D9F9BCC11_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
