#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/MoleMole/UIAbyssS2InlevelMapAreaWidgetController_RefreshMapAnimType.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIAbyssS2InlevelMapAreaWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__PLAYREFRESHMAPANIM_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B2D70)
#define MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__PLAYREFRESHMAPANIM_D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2InlevelMapAreaWidgetController__PlayRefreshMapAnim_d__7_TypeDefinitionIndex = 74070;

	struct alignas(8) UIAbyssS2InlevelMapAreaWidgetController__PlayRefreshMapAnim_d__7
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87> __u__1; // 0x20
		::System::Threading::CancellationToken ct; // 0x30
		::MoleMole::UIAbyssS2InlevelMapAreaWidgetController* __4__this; // 0x38
		::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_RefreshMapAnimType refreshMapAnimType; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__PLAYREFRESHMAPANIM_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2INLEVELMAPAREAWIDGETCONTROLLER__PLAYREFRESHMAPANIM_D__7_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
