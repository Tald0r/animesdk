#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_AF0F60B7EC92FD6A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_B99494702E2A4F9E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3ADAE0)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_B99494702E2A4F9E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2D0140)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_B99494702E2A4F9E_TypeDefinitionIndex = 56921;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_B99494702E2A4F9E
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x20
	::Class_2_AF0F60B7EC92FD6A* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::UInt32 Field_2_3; // 0x4C
	::Enum_3_0A3761FE34514D6C_37 Field_2_4; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_B99494702E2A4F9E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_B99494702E2A4F9E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
