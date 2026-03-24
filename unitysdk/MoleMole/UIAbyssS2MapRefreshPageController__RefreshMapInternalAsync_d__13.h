#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_3_991B96FD979B03A4;
class Class_3_9EF9F60B4C5E8B82;
namespace MoleMole { class UIAbyssS2MapRefreshPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35E930)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController__RefreshMapInternalAsync_d__13_TypeDefinitionIndex = 67299;

	struct alignas(8) UIAbyssS2MapRefreshPageController__RefreshMapInternalAsync_d__13
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_991B96FD979B03A4*> __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Threading::CancellationTokenSource* cts; // 0x38
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Boolean, ::Class_3_9EF9F60B4C5E8B82*>> __u__2; // 0x40
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__3; // 0x60
		::MoleMole::UIAbyssS2MapRefreshPageController* __4__this; // 0x70
		::System::Int32 __1__state; // 0x78
		::System::Boolean _needReSortProps_5__2; // 0x7C
		::System::Int32 itemId; // 0x80

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
