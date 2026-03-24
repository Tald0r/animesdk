#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISABYSSHEATACTIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB8366E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ISABYSSHEATACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xB836940)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_IsAbyssHeatActive_TypeDefinitionIndex = 50499;

	class LD_IsAbyssHeatActive : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Boolean, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISABYSSHEATACTIVE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 heatID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ISABYSSHEATACTIVE_INVOKE_OFFSET))(this, heatID);
		}
	};
}
