#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C1714D5E615D4B4B_10;
class MatAnimation;
namespace MoleMole { class UISuibianTempleBuddyLevelupController; }
namespace MoleMole { class UISuibianTempleBuddyLevelupController___c__DisplayClass28_0; }
namespace MoleMole { class UISuibianTempleBuddyLevelupController___c__DisplayClass28_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x36E120)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyLevelupController__OnClickBtn2_d__28_TypeDefinitionIndex = 70075;

	struct alignas(8) UISuibianTempleBuddyLevelupController__OnClickBtn2_d__28
	{
		::MoleMole::UISuibianTempleBuddyLevelupController___c__DisplayClass28_0* __8__1; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_C1714D5E615D4B4B_10*> __u__1; // 0x18
		::Class_3_C1714D5E615D4B4B_10* _rsp_5__2; // 0x30
		::UnityEngine::Animation* _anim_5__4; // 0x38
		::MoleMole::UISuibianTempleBuddyLevelupController___c__DisplayClass28_1* __8__2; // 0x40
		::MoleMole::UISuibianTempleBuddyLevelupController* __4__this; // 0x48
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x50
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x60
		::MatAnimation* _matAnim_5__3; // 0x68
		::System::Int32 __1__state; // 0x70
		::System::Single _delay_5__5; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYLEVELUPCONTROLLER__ONCLICKBTN2_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
