#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELPASSTIMEPAUSESET_INVOKE_OFFSET UNITYSDK_OFFSET(0xF1B0D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELPASSTIMEPAUSESET__CTOR_OFFSET UNITYSDK_OFFSET(0xF1B0DF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_LevelPassTimePauseSet_TypeDefinitionIndex = 57906;

	class LD_LevelPassTimePauseSet : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELPASSTIMEPAUSESET__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELPASSTIMEPAUSESET_INVOKE_OFFSET))(this, isPause);
		}
	};
}
