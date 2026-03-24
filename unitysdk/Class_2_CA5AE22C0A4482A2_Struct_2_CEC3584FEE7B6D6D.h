#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_CA5AE22C0A4482A2;
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Transform; }

#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_CEC3584FEE7B6D6D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x30A510)
#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_CEC3584FEE7B6D6D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_CA5AE22C0A4482A2_Struct_2_CEC3584FEE7B6D6D_TypeDefinitionIndex = 80293;

struct alignas(8) Class_2_CA5AE22C0A4482A2_Struct_2_CEC3584FEE7B6D6D
{
	::UnityEngine::Transform* Field_2_3; // 0x10
	::Class_2_CA5AE22C0A4482A2* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*> Field_2_4; // 0x28
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_CEC3584FEE7B6D6D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_CEC3584FEE7B6D6D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
