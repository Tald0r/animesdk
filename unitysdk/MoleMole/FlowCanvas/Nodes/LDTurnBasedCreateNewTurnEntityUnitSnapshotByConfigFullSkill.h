#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

class Class_2_2DFF2C3A1B28473E;

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL_INVOKE_OFFSET UNITYSDK_OFFSET(0xE8766B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xE876760)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfigFullSkill_TypeDefinitionIndex = 57620;

	class LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfigFullSkill : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::Class_2_2DFF2C3A1B28473E*, ::System::UInt32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL__CTOR_OFFSET))(this);
		}

		::Class_2_2DFF2C3A1B28473E* Invoke(::System::UInt32 entityID, ::System::Int32 configID)
		{
			return ((::Class_2_2DFF2C3A1B28473E*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL_INVOKE_OFFSET))(this, entityID, configID);
		}
	};
}
