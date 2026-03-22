#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRedeemRewardDialogPopWindowController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__DOPASTEREWARDCODECLOUDASYNC_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3F03F0)
#define MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__DOPASTEREWARDCODECLOUDASYNC_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x310210)

namespace MoleMole
{
	inline static constexpr unsigned int UIRedeemRewardDialogPopWindowController__DoPasteRewardCodeCloudAsync_d__29_TypeDefinitionIndex = 41583;

	struct alignas(8) UIRedeemRewardDialogPopWindowController__DoPasteRewardCodeCloudAsync_d__29
	{
		::MoleMole::UIRedeemRewardDialogPopWindowController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::String*> __u__1; // 0x18
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__DOPASTEREWARDCODECLOUDASYNC_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__DOPASTEREWARDCODECLOUDASYNC_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
