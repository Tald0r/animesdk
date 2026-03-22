#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_398;
class Class_2_B89683A15B3B0C43;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B89683A15B3B0C43_STRUCT_2_40E784996B1D0CFB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35ECE0)
#define CLASS_2_B89683A15B3B0C43_STRUCT_2_40E784996B1D0CFB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_B89683A15B3B0C43_Struct_2_40E784996B1D0CFB_TypeDefinitionIndex = 45483;

struct alignas(8) Class_2_B89683A15B3B0C43_Struct_2_40E784996B1D0CFB
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::Class_2_B89683A15B3B0C43* Field_2_2; // 0x40
	::Class_0_16E4307DCC419505_398* Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_4; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_40E784996B1D0CFB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_40E784996B1D0CFB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
