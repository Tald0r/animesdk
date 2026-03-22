#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"

namespace QWER { class CTaskHelper___c__DisplayClass4_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define QWER_CTASKHELPER__DELAY_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AA21DC0)
#define QWER_CTASKHELPER__DELAY_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1AA22120)
#define QWER_CTASKHELPER__DELAY_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA21CE0)

namespace QWER
{
	inline static constexpr unsigned int CTaskHelper__Delay_d__4_TypeDefinitionIndex = 82105;

	class CTaskHelper__Delay_d__4 : public ::System::Object
	{
	public:
		::QWER::CTaskHelper___c__DisplayClass4_0* __8__1; // 0x10
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x18
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x20
		::System::UInt64 qwMilliSeconds; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER__DELAY_D__4__CTOR_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER__DELAY_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER__DELAY_D__4_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
