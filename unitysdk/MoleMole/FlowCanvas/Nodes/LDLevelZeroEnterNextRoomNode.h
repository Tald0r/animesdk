#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

class Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC;
class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xCD3BDA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xCD3BA00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xCD3BB80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xCD3B430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD3BE90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__HANDLELEVELZEROROOMEND_OFFSET UNITYSDK_OFFSET(0xCD3B710)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__ONNEXTROOMLOADFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCD3B600)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0xCD3BEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0xCD3BF20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xCD3C020)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xCD3C030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___HANDLELEVELZEROROOMEND_B__13_0_OFFSET UNITYSDK_OFFSET(0xCD3BFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___ONNEXTROOMLOADFINISHEDCALLBACK_B__12_0_OFFSET UNITYSDK_OFFSET(0xCD3BF60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroEnterNextRoomNode_TypeDefinitionIndex = 42520;

	class LDLevelZeroEnterNextRoomNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* onNextRoomLoadFinishedFlowOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isSuccess; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* _overrideDelayExitTime; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* _performType; // 0xC0
		::FlowCanvas::FlowInput* _transitIn; // 0xC8
		::FlowCanvas::FlowOutput* output; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _enableDelayExit; // 0xD8
		::System::Single delayRealLoadDuration; // 0xE0
		::System::Boolean _hasExecuted; // 0xE4
		::System::Boolean IsAutoTransit; // 0xE5
		::System::Boolean _hasTransitAvatar; // 0xE6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _OnNextRoomLoadFinishedCallback(::System::Boolean isSameStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__ONNEXTROOMLOADFINISHEDCALLBACK_OFFSET))(this, isSameStage);
		}

		::System::Void _HandleLevelZeroRoomEnd(::System::Boolean isLastRoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__HANDLELEVELZEROROOMEND_OFFSET))(this, isLastRoom);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Boolean OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__REGISTERPORTS_B__11_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__REGISTERPORTS_B__11_1_OFFSET))(this, flow);
		}

		::System::Void __OnNextRoomLoadFinishedCallback_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___ONNEXTROOMLOADFINISHEDCALLBACK_B__12_0_OFFSET))(this);
		}

		::System::Void __HandleLevelZeroRoomEnd_b__13_0(::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC* tctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_510AA82C8B8CAF1E_Class_1_61CF71413B6AF5CC*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___HANDLELEVELZEROROOMEND_B__13_0_OFFSET))(this, tctx);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
