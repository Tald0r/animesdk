#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARTEPLATEIDNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0xD7FD7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARTEPLATEIDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7FDA70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetLocalAvatarTeplateIDNode_TypeDefinitionIndex = 62435;

	class LDGetLocalAvatarTeplateIDNode : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARTEPLATEIDNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLOCALAVATARTEPLATEIDNODE_INVOKE_OFFSET))(this);
		}
	};
}
