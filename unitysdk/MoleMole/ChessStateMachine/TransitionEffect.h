#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/MoleMole/ScreenSwitchType.h"

class Class_1_43BD383C98B4C0C5_22;

#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_FORCESTOP_OFFSET UNITYSDK_OFFSET(0xBADB6A0)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0xBADB760)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0xBADB2D0)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_STOP_OFFSET UNITYSDK_OFFSET(0xBADB700)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBADB770)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TransitionEffect_TypeDefinitionIndex = 79422;

	class TransitionEffect : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Boolean NeedStopAll; // 0x28
		::MoleMole::ScreenSwitchType SwitchType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_22* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_22*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_GET_ISINSTANT_OFFSET))(this);
		}
	};
}
