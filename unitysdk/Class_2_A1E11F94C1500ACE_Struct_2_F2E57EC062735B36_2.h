#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_A1E11F94C1500ACE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_A1E11F94C1500ACE_STRUCT_2_F2E57EC062735B36_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x332D30)
#define CLASS_2_A1E11F94C1500ACE_STRUCT_2_F2E57EC062735B36_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x30F550)

inline static constexpr unsigned int Class_2_A1E11F94C1500ACE_Struct_2_F2E57EC062735B36_2_TypeDefinitionIndex = 76027;

struct alignas(8) Class_2_A1E11F94C1500ACE_Struct_2_F2E57EC062735B36_2
{
	::Class_2_A1E11F94C1500ACE* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87> Field_2_3; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1E11F94C1500ACE_STRUCT_2_F2E57EC062735B36_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_A1E11F94C1500ACE_STRUCT_2_F2E57EC062735B36_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
