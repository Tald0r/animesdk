#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace MoleMole { class UIRidusGotBooPageController___c__DisplayClass334_0; }
namespace MoleMole { class UIRidusGotBooResultPageControllerContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__DELAYFADEOUTUIANDPOPRESULTPAGE_D__334_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x37F210)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__DELAYFADEOUTUIANDPOPRESULTPAGE_D__334_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__DelayFadeoutUIAndPopResultPage_d__334_TypeDefinitionIndex = 66311;

	struct alignas(8) UIRidusGotBooPageController__DelayFadeoutUIAndPopResultPage_d__334
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIRidusGotBooPageController___c__DisplayClass334_0* __8__1; // 0x18
		::MoleMole::UIRidusGotBooResultPageControllerContext* ctx; // 0x20
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* finishedIDs; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__DELAYFADEOUTUIANDPOPRESULTPAGE_D__334_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__DELAYFADEOUTUIANDPOPRESULTPAGE_D__334_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
