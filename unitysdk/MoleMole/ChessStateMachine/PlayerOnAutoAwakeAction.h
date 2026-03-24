#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_22;

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x7BB8950)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x7BB8690)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x7BB8A70)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__RUN_B__1_0_OFFSET UNITYSDK_OFFSET(0x7BB8A80)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x7BB8AB0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x7BB8B10)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlayerOnAutoAwakeAction_TypeDefinitionIndex = 69992;

	class PlayerOnAutoAwakeAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::Foundation::Coroutine::CoroutineHandle _handler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_22* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_22*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void _Run_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__RUN_B__1_0_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_22* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_22*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
