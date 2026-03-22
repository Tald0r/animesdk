#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }

#define CLASS_1_B317A77A259C7EFE_METHOD_1_1C07ED611BA0AF66_OFFSET UNITYSDK_OFFSET(0x987FF40)
#define CLASS_1_B317A77A259C7EFE_METHOD_1_DCE7620711CAB85B_OFFSET UNITYSDK_OFFSET(0x9880A40)
#define CLASS_1_B317A77A259C7EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x987FF30)

inline static constexpr unsigned int Class_1_B317A77A259C7EFE_TypeDefinitionIndex = 45220;

class Class_1_B317A77A259C7EFE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B317A77A259C7EFE__CTOR_OFFSET))(this);
	}

	static ::MoleMole::ChessStateMachine::StateMachineBaseAction* Method_1_1C07ED611BA0AF66(::MoleMole::ChessStateMachine::StateMachineBaseAction* a1)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::MoleMole::ChessStateMachine::StateMachineBaseAction*))((::PBYTE)hIl2Cpp + CLASS_1_B317A77A259C7EFE_METHOD_1_1C07ED611BA0AF66_OFFSET))(a1);
	}

	static ::MoleMole::ChessStateMachine::StateNodeConfig* Method_1_DCE7620711CAB85B(::MoleMole::ChessStateMachine::StateNodeConfig* a1)
	{
		return ((::MoleMole::ChessStateMachine::StateNodeConfig*(*)(::MoleMole::ChessStateMachine::StateNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B317A77A259C7EFE_METHOD_1_DCE7620711CAB85B_OFFSET))(a1);
	}
};
