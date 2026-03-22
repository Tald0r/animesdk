#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDISENTITYALIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0xE476930)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISENTITYALIVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xE4767E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISENTITYALIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xE476CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISENTITYALIVE__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0xE476CF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDIsEntityAlive_TypeDefinitionIndex = 63329;

	class LDIsEntityAlive : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* trueOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* inputValue; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::FlowInput* input; // 0xC0
		::FlowCanvas::FlowOutput* falseOutput; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISENTITYALIVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISENTITYALIVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISENTITYALIVE_INVOKE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISENTITYALIVE__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}
	};
}
