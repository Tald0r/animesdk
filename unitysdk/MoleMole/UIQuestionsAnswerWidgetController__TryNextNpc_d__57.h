#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_123;
class Class_2_208CC9941471731A_384;
class Class_2_360F008FD42AEBAC;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace MoleMole { class UIQuestionsAnswerWidgetController___c__DisplayClass57_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3A3D10)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController__TryNextNpc_d__57_TypeDefinitionIndex = 66354;

	struct alignas(8) UIQuestionsAnswerWidgetController__TryNextNpc_d__57
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Class_2_208CC9941471731A_384* _nextConfig_5__3; // 0x20
		::Class_2_208CC9941471731A_123* _special_5__7; // 0x28
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x30
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__2; // 0x38
		::Class_2_360F008FD42AEBAC* _stageConfig_5__2; // 0x48
		::Class_2_360F008FD42AEBAC* _stage_5__6; // 0x50
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x58
		::MoleMole::UIQuestionsAnswerWidgetController___c__DisplayClass57_0* __8__1; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Int32 _exScore_5__5; // 0x74
		::System::Boolean skipScreen; // 0x78
		::System::Boolean _correct_5__4; // 0x79

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__TRYNEXTNPC_D__57_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
