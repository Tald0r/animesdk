#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_46DACABA4A64F764_STRUCT_2_67223CB5E8E5E154_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x390EC0)
#define CLASS_2_46DACABA4A64F764_STRUCT_2_67223CB5E8E5E154_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_46DACABA4A64F764_Struct_2_67223CB5E8E5E154_TypeDefinitionIndex = 41165;

struct alignas(8) Class_2_46DACABA4A64F764_Struct_2_67223CB5E8E5E154
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764_STRUCT_2_67223CB5E8E5E154_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764_STRUCT_2_67223CB5E8E5E154_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
