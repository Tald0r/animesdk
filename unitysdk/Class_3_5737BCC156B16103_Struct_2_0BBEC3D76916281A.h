#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_229;
class Class_1_5092FCA5A67513C7;
class Class_1_B7C41BE725AAED79;
class Class_3_5737BCC156B16103;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_5737BCC156B16103_STRUCT_2_0BBEC3D76916281A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x373680)
#define CLASS_3_5737BCC156B16103_STRUCT_2_0BBEC3D76916281A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_3_5737BCC156B16103_Struct_2_0BBEC3D76916281A_TypeDefinitionIndex = 38953;

struct alignas(8) Class_3_5737BCC156B16103_Struct_2_0BBEC3D76916281A
{
	::Class_3_5737BCC156B16103* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_B7C41BE725AAED79*> Field_2_1; // 0x18
	::Class_0_16E4307DCC419505_229* Field_2_4; // 0x30
	::System::String* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_5092FCA5A67513C7*> Field_2_6; // 0x40
	::System::Int32 Field_2_0; // 0x58
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_5; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5737BCC156B16103_STRUCT_2_0BBEC3D76916281A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_5737BCC156B16103_STRUCT_2_0BBEC3D76916281A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
