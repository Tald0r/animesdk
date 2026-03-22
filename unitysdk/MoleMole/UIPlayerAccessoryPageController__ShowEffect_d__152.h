#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace MoleMole { class UIPlayerAccessoryPageController___c__DisplayClass152_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWEFFECT_D__152_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3932A0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWEFFECT_D__152_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__ShowEffect_d__152_TypeDefinitionIndex = 77116;

	struct alignas(8) UIPlayerAccessoryPageController__ShowEffect_d__152
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::UIPlayerAccessoryPageController___c__DisplayClass152_0* __8__1; // 0x20
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x28
		::UnityEngine::Renderer* _renderer_5__2; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x38
		::System::Int32 cfgID; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWEFFECT_D__152_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWEFFECT_D__152_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
