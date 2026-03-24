#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_2_423F3A73D988B24A;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_CLOSE_OFFSET UNITYSDK_OFFSET(0xA5013A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_ONTIMELINEFINISH_OFFSET UNITYSDK_OFFSET(0xA501440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA500E50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_START_OFFSET UNITYSDK_OFFSET(0xA501010)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA5015B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartShootTimeLimitTask_TypeDefinitionIndex = 47656;

	class LDStartShootTimeLimitTask : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _fail; // 0xA8
		::FlowCanvas::FlowOutput* _success; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* _totalTime; // 0xC0
		::Class_2_423F3A73D988B24A* _task; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* _totalTarget; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* _rewardScore; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_START_OFFSET))(this, flow);
		}

		::System::Void Close(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_CLOSE_OFFSET))(this, flow);
		}

		::System::Void OnTimeLineFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTTIMELIMITTASK_ONTIMELINEFINISH_OFFSET))(this, success);
		}
	};
}
