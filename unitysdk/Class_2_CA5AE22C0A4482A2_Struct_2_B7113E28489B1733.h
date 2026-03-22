#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_CA5AE22C0A4482A2;
class Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_B7113E28489B1733_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x34B720)
#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_B7113E28489B1733_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_CA5AE22C0A4482A2_Struct_2_B7113E28489B1733_TypeDefinitionIndex = 55451;

struct alignas(8) Class_2_CA5AE22C0A4482A2_Struct_2_B7113E28489B1733
{
	::Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A_1* Field_2_3; // 0x10
	::Class_2_CA5AE22C0A4482A2* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_4; // 0x20
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_5; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x40
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_6; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_B7113E28489B1733_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_B7113E28489B1733_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
