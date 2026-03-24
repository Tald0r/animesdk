#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3407002B0BC6E5ED_Class_1_D08598A53ECB9EAF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3407002B0BC6E5ED_CLASS_1_D08598A53ECB9EAF_STRUCT_2_604119849220121B_15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C2AC0)
#define CLASS_2_3407002B0BC6E5ED_CLASS_1_D08598A53ECB9EAF_STRUCT_2_604119849220121B_15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_3407002B0BC6E5ED_Class_1_D08598A53ECB9EAF_Struct_2_604119849220121B_15_TypeDefinitionIndex = 80006;

struct alignas(8) Class_2_3407002B0BC6E5ED_Class_1_D08598A53ECB9EAF_Struct_2_604119849220121B_15
{
	::System::Threading::CancellationToken Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Class_2_3407002B0BC6E5ED_Class_1_D08598A53ECB9EAF* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED_CLASS_1_D08598A53ECB9EAF_STRUCT_2_604119849220121B_15_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3407002B0BC6E5ED_CLASS_1_D08598A53ECB9EAF_STRUCT_2_604119849220121B_15_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
