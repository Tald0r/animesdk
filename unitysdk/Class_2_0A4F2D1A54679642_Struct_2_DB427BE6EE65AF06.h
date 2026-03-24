#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_0A4F2D1A54679642;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_0A4F2D1A54679642_STRUCT_2_DB427BE6EE65AF06_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x316900)
#define CLASS_2_0A4F2D1A54679642_STRUCT_2_DB427BE6EE65AF06_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_0A4F2D1A54679642_Struct_2_DB427BE6EE65AF06_TypeDefinitionIndex = 55209;

struct alignas(8) Class_2_0A4F2D1A54679642_Struct_2_DB427BE6EE65AF06
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::System::Threading::CancellationToken Field_2_2; // 0x20
	::Class_2_0A4F2D1A54679642* Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Single Field_2_5; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A4F2D1A54679642_STRUCT_2_DB427BE6EE65AF06_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_0A4F2D1A54679642_STRUCT_2_DB427BE6EE65AF06_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
