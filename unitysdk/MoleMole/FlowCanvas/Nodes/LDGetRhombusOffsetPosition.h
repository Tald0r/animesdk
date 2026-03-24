#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDGetRhombusOffsetPosition_RhombusFType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDGetRhombusOffsetPosition_RhombusMType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION_RAYCASTTOGROUND_OFFSET UNITYSDK_OFFSET(0xA4FA670)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA4FA500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xA4FA7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION__REGISTERPORTS_B__13_0_OFFSET UNITYSDK_OFFSET(0xA4FA820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION__REGISTERPORTS_B__13_1_OFFSET UNITYSDK_OFFSET(0xA4FAEA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetRhombusOffsetPosition_TypeDefinitionIndex = 38446;

	class LDGetRhombusOffsetPosition : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* inputDstV3; // 0xB0
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* inputSrcV3; // 0xB8
		::System::Single RhombusWidth; // 0xC0
		::System::Single offsetFixed; // 0xC4
		::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType rhombusMType; // 0xC8
		::UnityEngine::Vector3 _final; // 0xCC
		::System::Single offsetRatio; // 0xD8
		::System::Boolean IsPreferLeft; // 0xDC
		::System::Boolean SkipRaycastToGround; // 0xDD
		::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType rhombusFType; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION_REGISTERPORTS_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 RaycastToGround(::UnityEngine::Vector3 position, ::System::Single initHeightOffset)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION_RAYCASTTOGROUND_OFFSET))(position, initHeightOffset);
		}

		::System::Void _RegisterPorts_b__13_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION__REGISTERPORTS_B__13_0_OFFSET))(this, flow);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__13_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETRHOMBUSOFFSETPOSITION__REGISTERPORTS_B__13_1_OFFSET))(this);
		}
	};
}
