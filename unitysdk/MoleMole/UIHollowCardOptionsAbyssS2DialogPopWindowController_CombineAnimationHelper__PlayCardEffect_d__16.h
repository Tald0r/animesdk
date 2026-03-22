#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYCARDEFFECT_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x364FF0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYCARDEFFECT_D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper__PlayCardEffect_d__16_TypeDefinitionIndex = 55095;

	struct alignas(8) UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper__PlayCardEffect_d__16
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::HollowCardCombineConfig* config; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Boolean isSecondCombine; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYCARDEFFECT_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__PLAYCARDEFFECT_D__16_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
