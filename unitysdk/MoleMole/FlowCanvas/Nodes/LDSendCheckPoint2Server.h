#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSENDCHECKPOINT2SERVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x6AE99F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSENDCHECKPOINT2SERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x6AE9BD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSendCheckPoint2Server_TypeDefinitionIndex = 75658;

	class LDSendCheckPoint2Server : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSENDCHECKPOINT2SERVER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSENDCHECKPOINT2SERVER_INVOKE_OFFSET))(this);
		}
	};
}
