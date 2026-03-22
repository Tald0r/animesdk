#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UILiveHousePlay3DModelController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UILIVEHOUSEPLAY3DMODELCONTROLLER__ENTERPERFORMSPOTPROCESS_D__80_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x338930)
#define MOLEMOLE_UILIVEHOUSEPLAY3DMODELCONTROLLER__ENTERPERFORMSPOTPROCESS_D__80_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2C7C30)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHousePlay3DModelController__EnterPerformSpotProcess_d__80_TypeDefinitionIndex = 62933;

	struct alignas(8) UILiveHousePlay3DModelController__EnterPerformSpotProcess_d__80
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UILiveHousePlay3DModelController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPLAY3DMODELCONTROLLER__ENTERPERFORMSPOTPROCESS_D__80_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPLAY3DMODELCONTROLLER__ENTERPERFORMSPOTPROCESS_D__80_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
