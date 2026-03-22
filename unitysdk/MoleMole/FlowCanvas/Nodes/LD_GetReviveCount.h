#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETREVIVECOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0xE0FF570)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETREVIVECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0xE0FF6F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetReviveCount_TypeDefinitionIndex = 38107;

	class LD_GetReviveCount : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETREVIVECOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETREVIVECOUNT_INVOKE_OFFSET))(this);
		}
	};
}
