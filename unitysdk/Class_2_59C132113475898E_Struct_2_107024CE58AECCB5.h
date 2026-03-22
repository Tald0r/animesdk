#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_59C132113475898E;
class Class_2_59C132113475898E_Class_1_C40C6E99261D653F_4;
class Class_3_D9FABB598B022DEA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_59C132113475898E_STRUCT_2_107024CE58AECCB5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2F65B0)
#define CLASS_2_59C132113475898E_STRUCT_2_107024CE58AECCB5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_59C132113475898E_Struct_2_107024CE58AECCB5_TypeDefinitionIndex = 74353;

struct alignas(8) Class_2_59C132113475898E_Struct_2_107024CE58AECCB5
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x10
	::System::Threading::CancellationToken Field_2_10; // 0x20
	::Class_2_59C132113475898E_Class_1_C40C6E99261D653F_4* Field_2_11; // 0x28
	::Class_2_59C132113475898E* Field_2_9; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_D9FABB598B022DEA*> Field_2_1; // 0x38
	::System::Int32 Field_2_5; // 0x50
	::System::Int32 Field_2_4; // 0x54
	::System::UInt32 Field_2_6; // 0x58
	::System::Int32 Field_2_0; // 0x5C
	::System::Single Field_2_2; // 0x60
	::System::Boolean Field_2_8; // 0x64
	::System::Boolean Field_2_7; // 0x65
	::System::Int32 Field_2_3; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_107024CE58AECCB5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_107024CE58AECCB5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
