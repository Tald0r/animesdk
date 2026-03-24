#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_384;
class Class_2_360F008FD42AEBAC;
class Class_2_BC6EAC72521F25DD;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__STARTGAME_D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3AAAE0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__STARTGAME_D__55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController__StartGame_d__55_TypeDefinitionIndex = 66340;

	struct alignas(8) UIQuestionsAnswerWidgetController__StartGame_d__55
	{
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x10
		::Class_2_360F008FD42AEBAC* _config_5__2; // 0x18
		::Class_2_208CC9941471731A_384* _nextConfig_5__3; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::Class_2_BC6EAC72521F25DD* _eventConfig_5__4; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 stageId; // 0x4C
		::System::Boolean restart; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__STARTGAME_D__55_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__STARTGAME_D__55_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
