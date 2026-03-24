#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D63229AA2DDA64A1;
class Class_1_D63229AA2DDA64A1_Class_1_B3BDF31F8BBF01AA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D63229AA2DDA64A1_STRUCT_2_D473F93BD6D472D2_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BBE90)
#define CLASS_1_D63229AA2DDA64A1_STRUCT_2_D473F93BD6D472D2_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_D63229AA2DDA64A1_Struct_2_D473F93BD6D472D2_1_TypeDefinitionIndex = 76083;

struct alignas(8) Class_1_D63229AA2DDA64A1_Struct_2_D473F93BD6D472D2_1
{
	::Class_1_D63229AA2DDA64A1_Class_1_B3BDF31F8BBF01AA* Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x18
	::System::Threading::CancellationToken Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::Class_1_D63229AA2DDA64A1* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63229AA2DDA64A1_STRUCT_2_D473F93BD6D472D2_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D63229AA2DDA64A1_STRUCT_2_D473F93BD6D472D2_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
