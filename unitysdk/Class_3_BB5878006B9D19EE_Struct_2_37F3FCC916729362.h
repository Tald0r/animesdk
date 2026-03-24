#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_876922B6C2DFE338;
class Class_3_BB5878006B9D19EE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_BB5878006B9D19EE_STRUCT_2_37F3FCC916729362_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x37D1F0)
#define CLASS_3_BB5878006B9D19EE_STRUCT_2_37F3FCC916729362_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_3_BB5878006B9D19EE_Struct_2_37F3FCC916729362_TypeDefinitionIndex = 43617;

struct alignas(8) Class_3_BB5878006B9D19EE_Struct_2_37F3FCC916729362
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Int32> Field_2_1; // 0x10
	::Class_3_BB5878006B9D19EE* Field_2_2; // 0x28
	::Class_1_876922B6C2DFE338* Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x38
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_STRUCT_2_37F3FCC916729362_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_STRUCT_2_37F3FCC916729362_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
