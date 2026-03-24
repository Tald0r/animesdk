#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardUpdateStateMachineParams_StateMachineParamsWrapper.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDUPDATESTATEMACHINEPARAMS_INVOKE_OFFSET UNITYSDK_OFFSET(0xA4F6430)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDUPDATESTATEMACHINEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F6560)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardUpdateStateMachineParams_TypeDefinitionIndex = 46876;

	class ChessboardUpdateStateMachineParams : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::Int32, ::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDUPDATESTATEMACHINEPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index, ::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper paramsWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDUPDATESTATEMACHINEPARAMS_INVOKE_OFFSET))(this, index, paramsWrapper);
		}
	};
}
