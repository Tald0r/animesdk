#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_E54B0BAFCA2425BD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_85D4E94C61D6F4FD_STRUCT_2_D36D1BF9EB02F44D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x30D2B0)
#define CLASS_2_85D4E94C61D6F4FD_STRUCT_2_D36D1BF9EB02F44D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_85D4E94C61D6F4FD_Struct_2_D36D1BF9EB02F44D_TypeDefinitionIndex = 53526;

struct alignas(8) Class_2_85D4E94C61D6F4FD_Struct_2_D36D1BF9EB02F44D
{
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_2_4; // 0x10
	::Class_2_E54B0BAFCA2425BD* Field_2_6; // 0x18
	::Foundation::ViewObject::ViewObjectHandle Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x30
	::System::Threading::CancellationToken Field_2_5; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x48
	::System::String* Field_2_3; // 0x58
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_STRUCT_2_D36D1BF9EB02F44D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_85D4E94C61D6F4FD_STRUCT_2_D36D1BF9EB02F44D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
