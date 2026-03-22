#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_41CD4AA08023F7C8;
namespace MoleMole { class UIBaseController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_41CD4AA08023F7C8_STRUCT_2_605F313E773B6DCF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35B760)
#define CLASS_2_41CD4AA08023F7C8_STRUCT_2_605F313E773B6DCF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2C3CA0)

inline static constexpr unsigned int Class_2_41CD4AA08023F7C8_Struct_2_605F313E773B6DCF_TypeDefinitionIndex = 67062;

struct alignas(8) Class_2_41CD4AA08023F7C8_Struct_2_605F313E773B6DCF
{
	::MoleMole::UIBaseController* Field_2_3; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x38
	::Class_2_41CD4AA08023F7C8* Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41CD4AA08023F7C8_STRUCT_2_605F313E773B6DCF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_41CD4AA08023F7C8_STRUCT_2_605F313E773B6DCF_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
