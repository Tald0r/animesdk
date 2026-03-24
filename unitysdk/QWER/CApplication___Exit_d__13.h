#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"

namespace QWER { class CApplication; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define QWER_CAPPLICATION___EXIT_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B00CD10)
#define QWER_CAPPLICATION___EXIT_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1B00CFB0)
#define QWER_CAPPLICATION___EXIT_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00CC60)

namespace QWER
{
	inline static constexpr unsigned int CApplication___Exit_d__13_TypeDefinitionIndex = 84112;

	class CApplication___Exit_d__13 : public ::System::Object
	{
	public:
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x18
		::QWER::CApplication* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION___EXIT_D__13__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION___EXIT_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION___EXIT_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
