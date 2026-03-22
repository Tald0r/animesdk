#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_5FBF9D5FD9B3F459_Class_1_1A520E7D82BE4A56_8;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_5FBF9D5FD9B3F459_STRUCT_2_FBDE5E3B7FBA3DCB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x34B770)
#define CLASS_2_5FBF9D5FD9B3F459_STRUCT_2_FBDE5E3B7FBA3DCB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_5FBF9D5FD9B3F459_Struct_2_FBDE5E3B7FBA3DCB_TypeDefinitionIndex = 65508;

struct alignas(8) Class_2_5FBF9D5FD9B3F459_Struct_2_FBDE5E3B7FBA3DCB
{
	::System::Threading::CancellationToken Field_2_9; // 0x10
	::Class_2_5FBF9D5FD9B3F459_Class_1_1A520E7D82BE4A56_8* Field_2_10; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_8; // 0x48
	::System::Int32 Field_2_6; // 0x50
	::System::Int32 Field_2_4; // 0x54
	::System::Int32 Field_2_0; // 0x58
	::System::Int32 Field_2_5; // 0x5C
	::System::Int32 Field_2_2; // 0x60
	::System::Boolean Field_2_3; // 0x64
	::System::Int32 Field_2_7; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_STRUCT_2_FBDE5E3B7FBA3DCB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_5FBF9D5FD9B3F459_STRUCT_2_FBDE5E3B7FBA3DCB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
