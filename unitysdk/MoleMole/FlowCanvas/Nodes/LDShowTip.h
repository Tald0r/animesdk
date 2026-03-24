#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIBubbleTips; }
namespace NodeCanvas::Framework { class Graph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP_ONCREATE_OFFSET UNITYSDK_OFFSET(0xB832180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB831F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB832260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__GETCREATEDTIPOBJECT_OFFSET UNITYSDK_OFFSET(0xB8321F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0xB832280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0xB832700)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP___BASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0xB832740)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTip_TypeDefinitionIndex = 79858;

	class LDShowTip : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::MoleMole::UIBubbleTips* _bubbleTip; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* tipID; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* showPage; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* tipParamList; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* tipParam; // 0xD0
		::FlowCanvas::FlowOutput* finish; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Boolean>* show; // 0xE0
		::System::Int32 defaultV; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnCreate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP_ONCREATE_OFFSET))(this, assignedGraph);
		}

		::MoleMole::UIBubbleTips* _GetCreatedTipObject()
		{
			return ((::MoleMole::UIBubbleTips*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__GETCREATEDTIPOBJECT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP__REGISTERPORTS_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnCreate(::NodeCanvas::Framework::Graph* P0)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTIP___BASE_ONCREATE_OFFSET))(this, P0);
		}
	};
}
