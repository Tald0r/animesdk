#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UITriDiceOracleDialogPopWindowController; }
namespace MoleMole { class UITriDiceOracleDialogPopWindowController___c__DisplayClass44_0; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PLAYEFFECT_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x325B10)
#define MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PLAYEFFECT_D__44_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleDialogPopWindowController__PlayEffect_d__44_TypeDefinitionIndex = 48491;

	struct alignas(8) UITriDiceOracleDialogPopWindowController__PlayEffect_d__44
	{
		::System::String* name; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::UITriDiceOracleDialogPopWindowController* __4__this; // 0x28
		::MoleMole::Battle::Entity* entity; // 0x30
		::System::String* dummy; // 0x38
		::MoleMole::UITriDiceOracleDialogPopWindowController___c__DisplayClass44_0* __8__1; // 0x40
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MoleMole::Battle::Entity*> __t__builder; // 0x48
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PLAYEFFECT_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEDIALOGPOPWINDOWCONTROLLER__PLAYEFFECT_D__44_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
