#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_622;
class Class_5_4E6AD13D7FCF6283;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_4E6AD13D7FCF6283_STRUCT_2_4E87E5E8CFC1AE54_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2D0100)
#define CLASS_5_4E6AD13D7FCF6283_STRUCT_2_4E87E5E8CFC1AE54_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_5_4E6AD13D7FCF6283_Struct_2_4E87E5E8CFC1AE54_TypeDefinitionIndex = 74513;

struct alignas(8) Class_5_4E6AD13D7FCF6283_Struct_2_4E87E5E8CFC1AE54
{
	::Class_0_16E4307DCC419505_622* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_5_4E6AD13D7FCF6283* Field_2_3; // 0x38
	::Class_0_16E4307DCC419505_622* Field_2_7; // 0x40
	::System::Threading::CancellationToken Field_2_5; // 0x48
	::System::Boolean Field_2_4; // 0x50
	::System::Int32 Field_2_0; // 0x54
	::Enum_3_982178F761E7F1DC Field_2_2; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4E6AD13D7FCF6283_STRUCT_2_4E87E5E8CFC1AE54_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_4E6AD13D7FCF6283_STRUCT_2_4E87E5E8CFC1AE54_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
