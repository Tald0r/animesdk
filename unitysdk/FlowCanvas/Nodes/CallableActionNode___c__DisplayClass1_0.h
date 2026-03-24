#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class CallableActionNode; }

#define FLOWCANVAS_NODES_CALLABLEACTIONNODE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BF3B0)
#define FLOWCANVAS_NODES_CALLABLEACTIONNODE___C__DISPLAYCLASS1_0__ONREGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1A1BF3C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableActionNode___c__DisplayClass1_0_TypeDefinitionIndex = 27649;

	class CallableActionNode___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CallableActionNode* __4__this; // 0x10
		::FlowCanvas::FlowOutput* o; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEACTIONNODE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEACTIONNODE___C__DISPLAYCLASS1_0__ONREGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
