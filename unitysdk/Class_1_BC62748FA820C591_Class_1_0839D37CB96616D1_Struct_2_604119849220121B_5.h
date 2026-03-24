#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_STRUCT_2_604119849220121B_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x38EF80)
#define CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_STRUCT_2_604119849220121B_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1_Struct_2_604119849220121B_5_TypeDefinitionIndex = 61480;

struct alignas(8) Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1_Struct_2_604119849220121B_5
{
	::Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::System::Threading::CancellationToken Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_STRUCT_2_604119849220121B_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_STRUCT_2_604119849220121B_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
