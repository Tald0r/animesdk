#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_46DACABA4A64F764_STRUCT_2_67223CB5E8E5E154_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x319010)
#define CLASS_2_46DACABA4A64F764_STRUCT_2_67223CB5E8E5E154_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_46DACABA4A64F764_Struct_2_67223CB5E8E5E154_1_TypeDefinitionIndex = 72570;

struct alignas(8) Class_2_46DACABA4A64F764_Struct_2_67223CB5E8E5E154_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::System::Threading::CancellationToken Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764_STRUCT_2_67223CB5E8E5E154_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764_STRUCT_2_67223CB5E8E5E154_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
