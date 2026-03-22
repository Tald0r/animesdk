#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_4107ECDD60341DBB;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_4107ECDD60341DBB_STRUCT_2_6F9FC0C864A6355C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x37CA90)
#define CLASS_2_4107ECDD60341DBB_STRUCT_2_6F9FC0C864A6355C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2CA890)

inline static constexpr unsigned int Class_2_4107ECDD60341DBB_Struct_2_6F9FC0C864A6355C_TypeDefinitionIndex = 55390;

struct alignas(8) Class_2_4107ECDD60341DBB_Struct_2_6F9FC0C864A6355C
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> Field_2_5; // 0x18
	::Class_2_4107ECDD60341DBB* Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_STRUCT_2_6F9FC0C864A6355C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_STRUCT_2_6F9FC0C864A6355C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
