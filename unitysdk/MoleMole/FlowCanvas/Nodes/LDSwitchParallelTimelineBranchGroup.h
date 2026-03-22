#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP_INVOKE_OFFSET UNITYSDK_OFFSET(0x82D08E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x82D0A30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchParallelTimelineBranchGroup_TypeDefinitionIndex = 61105;

	class LDSwitchParallelTimelineBranchGroup : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::String*, ::System::String*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timelineCustomTag, ::System::String* branchGroupTag, ::System::Boolean workable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHPARALLELTIMELINEBRANCHGROUP_INVOKE_OFFSET))(this, timelineCustomTag, branchGroupTag, workable);
		}
	};
}
