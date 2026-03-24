#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_43BD383C98B4C0C5_22;

#define MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS_FORCESTOP_OFFSET UNITYSDK_OFFSET(0xC214550)
#define MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0xC2147A0)
#define MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS_RUN_OFFSET UNITYSDK_OFFSET(0xC2142F0)
#define MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS_STOP_OFFSET UNITYSDK_OFFSET(0xC214690)
#define MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0xC2147B0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PositionClass_TypeDefinitionIndex = 78294;

	class PositionClass : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::UnityEngine::Vector2 pos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_22* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_22*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_POSITIONCLASS_GET_ISINSTANT_OFFSET))(this);
		}
	};
}
