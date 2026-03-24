#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_CA5AE22C0A4482A2;
class Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_B7113E28489B1733_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x385AD0)
#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_B7113E28489B1733_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_CA5AE22C0A4482A2_Struct_2_B7113E28489B1733_TypeDefinitionIndex = 80294;

struct alignas(8) Class_2_CA5AE22C0A4482A2_Struct_2_B7113E28489B1733
{
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A_4* Field_2_3; // 0x38
	::Class_2_CA5AE22C0A4482A2* Field_2_2; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_4; // 0x48
	::System::Int32 Field_2_6; // 0x50
	::System::Int32 Field_2_0; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_B7113E28489B1733_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_B7113E28489B1733_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
