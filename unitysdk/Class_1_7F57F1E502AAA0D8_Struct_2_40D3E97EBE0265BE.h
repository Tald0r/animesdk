#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7F57F1E502AAA0D8;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_7F57F1E502AAA0D8_STRUCT_2_40D3E97EBE0265BE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x326820)
#define CLASS_1_7F57F1E502AAA0D8_STRUCT_2_40D3E97EBE0265BE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x30F550)

inline static constexpr unsigned int Class_1_7F57F1E502AAA0D8_Struct_2_40D3E97EBE0265BE_TypeDefinitionIndex = 51042;

struct alignas(8) Class_1_7F57F1E502AAA0D8_Struct_2_40D3E97EBE0265BE
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87> Field_2_4; // 0x10
	::System::Action* Field_2_3; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x28
	::Class_1_7F57F1E502AAA0D8* Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_STRUCT_2_40D3E97EBE0265BE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_STRUCT_2_40D3E97EBE0265BE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
