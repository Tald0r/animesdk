#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_29606631DBDC3F74_Class_1_81AAFEC156C931F6;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_29606631DBDC3F74_STRUCT_2_F66E7235E21A4FAA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x45D970)
#define CLASS_1_29606631DBDC3F74_STRUCT_2_F66E7235E21A4FAA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_29606631DBDC3F74_Struct_2_F66E7235E21A4FAA_TypeDefinitionIndex = 69824;

struct alignas(8) Class_1_29606631DBDC3F74_Struct_2_F66E7235E21A4FAA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::Foundation::AssetRequestHandle Field_2_4; // 0x20
	::Class_1_29606631DBDC3F74_Class_1_81AAFEC156C931F6* Field_2_3; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> Field_2_1; // 0x48
	::Foundation::AssetPath Field_2_2; // 0x60
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_6; // 0x70
	::System::Int32 Field_2_0; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_STRUCT_2_F66E7235E21A4FAA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_STRUCT_2_F66E7235E21A4FAA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
