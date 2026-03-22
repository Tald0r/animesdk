#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_741A783BB79E5BB9;
class Class_4_8C41CE74BEA50FFC;
class Class_4_8C41CE74BEA50FFC_Class_1_5E9323171F9852AF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_8C41CE74BEA50FFC_STRUCT_2_F9DF62022887F96D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x57A8D0)
#define CLASS_4_8C41CE74BEA50FFC_STRUCT_2_F9DF62022887F96D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_4_8C41CE74BEA50FFC_Struct_2_F9DF62022887F96D_TypeDefinitionIndex = 72158;

struct alignas(8) Class_4_8C41CE74BEA50FFC_Struct_2_F9DF62022887F96D
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_4_8C41CE74BEA50FFC_Class_1_5E9323171F9852AF* Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x28
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::Class_3_741A783BB79E5BB9* Field_2_5; // 0x40
	::Class_4_8C41CE74BEA50FFC* Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC_STRUCT_2_F9DF62022887F96D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_8C41CE74BEA50FFC_STRUCT_2_F9DF62022887F96D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
