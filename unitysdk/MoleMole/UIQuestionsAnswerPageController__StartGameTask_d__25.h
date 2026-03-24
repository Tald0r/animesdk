#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace MoleMole { class UIQuestionsAnswerPageController___c__DisplayClass25_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__STARTGAMETASK_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x37AD60)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__STARTGAMETASK_D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController__StartGameTask_d__25_TypeDefinitionIndex = 78276;

	struct alignas(8) UIQuestionsAnswerPageController__StartGameTask_d__25
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::UIQuestionsAnswerPageController___c__DisplayClass25_0* __8__1; // 0x20
		::MoleMole::UIQuestionsAnswerPageController* __4__this; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::System::Int32 stageId; // 0x38
		::System::Boolean restart; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__STARTGAMETASK_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__STARTGAMETASK_D__25_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
