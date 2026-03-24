#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__RELOADGROUPBYQUEUE_D__109_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__RELOADGROUPBYQUEUE_D__109_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager__ReloadGroupByQueue_d__109_TypeDefinitionIndex = 74573;

	struct alignas(8) ViewObjectManager__ReloadGroupByQueue_d__109
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x30
		::System::Int32 _count_5__2; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__RELOADGROUPBYQUEUE_D__109_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER__RELOADGROUPBYQUEUE_D__109_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
