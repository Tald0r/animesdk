#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xCD385E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD386E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0xCD38700)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0xCD38860)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnableBlackCurtainLate_TypeDefinitionIndex = 55505;

	class LDEnableBlackCurtainLate : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::UnityEngine::AnimationCurve* curve; // 0xB0
		::FlowCanvas::FlowOutput* _onFinish; // 0xB8
		::System::Single duration; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__4_1(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAINLATE__REGISTERPORTS_B__4_1_OFFSET))(this, _);
		}
	};
}
