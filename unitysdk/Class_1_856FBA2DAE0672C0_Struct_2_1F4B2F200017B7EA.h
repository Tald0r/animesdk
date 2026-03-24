#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_856FBA2DAE0672C0_STRUCT_2_1F4B2F200017B7EA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x30F540)
#define CLASS_1_856FBA2DAE0672C0_STRUCT_2_1F4B2F200017B7EA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x30F550)

inline static constexpr unsigned int Class_1_856FBA2DAE0672C0_Struct_2_1F4B2F200017B7EA_TypeDefinitionIndex = 73145;

struct alignas(8) Class_1_856FBA2DAE0672C0_Struct_2_1F4B2F200017B7EA
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Int32> Field_2_5; // 0x10
	::NodeCanvas::Framework::Node* Field_2_2; // 0x18
	::System::Threading::Tasks::Task_1<::System::Int32>* Field_2_4; // 0x20
	::NodeCanvas::Framework::Graph* Field_2_3; // 0x28
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Int32> Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_856FBA2DAE0672C0_STRUCT_2_1F4B2F200017B7EA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_856FBA2DAE0672C0_STRUCT_2_1F4B2F200017B7EA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
