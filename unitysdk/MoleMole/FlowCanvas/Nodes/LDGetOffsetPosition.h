#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x7575E20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x7575F70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x7575FA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x75760F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetOffsetPosition_TypeDefinitionIndex = 70587;

	class LDGetOffsetPosition : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* inputV3; // 0xB0
		::UnityEngine::Vector3 _final; // 0xB8
		::UnityEngine::Vector3 offset; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETOFFSETPOSITION__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
