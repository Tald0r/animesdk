#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_71839714FF924929;
class Class_2_71839714FF924929_Class_1_C40C6E99261D653F;
class Class_3_025FF4981524A424_405;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_71839714FF924929_STRUCT_2_D7B09D5F883C235F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x359FD0)
#define CLASS_2_71839714FF924929_STRUCT_2_D7B09D5F883C235F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_71839714FF924929_Struct_2_D7B09D5F883C235F_TypeDefinitionIndex = 47976;

struct alignas(8) Class_2_71839714FF924929_Struct_2_D7B09D5F883C235F
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Class_2_71839714FF924929_Class_1_C40C6E99261D653F* Field_2_5; // 0x20
	::Class_2_71839714FF924929* Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_025FF4981524A424_405*> Field_2_1; // 0x30
	::System::Threading::CancellationToken Field_2_4; // 0x48
	::System::Int32 Field_2_0; // 0x50
	::System::Single Field_2_2; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_D7B09D5F883C235F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_D7B09D5F883C235F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
