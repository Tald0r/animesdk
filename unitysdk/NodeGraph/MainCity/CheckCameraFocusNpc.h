#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x6363670)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x6363470)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x63631E0)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x63631D0)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__ONREGISTERPARAM_B__6_0_OFFSET UNITYSDK_OFFSET(0x6363E90)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__ONREGISTERPARAM_B__6_1_OFFSET UNITYSDK_OFFSET(0x6363EC0)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__ONREGISTERPARAM_B__6_2_OFFSET UNITYSDK_OFFSET(0x6363EF0)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__ONREGISTERPARAM_B__6_3_OFFSET UNITYSDK_OFFSET(0x6363F20)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x6363F50)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x6363FB0)
#define NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x6363FC0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckCameraFocusNpc_TypeDefinitionIndex = 55859;

	class CheckCameraFocusNpc : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::MoleMole::Battle::Entity* _npc; // 0x88
		::System::Int32 focusNpcTag; // 0x90
		::System::Single checknpcFowardAngle; // 0x94
		::System::Single checkDis; // 0x98
		::System::Single checkAngle; // 0x9C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC_CHECKCONDITION_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__6_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__ONREGISTERPARAM_B__6_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__6_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__ONREGISTERPARAM_B__6_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__6_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__ONREGISTERPARAM_B__6_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__6_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC__ONREGISTERPARAM_B__6_3_OFFSET))(this, node);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC___BASE_CHECKCONDITION_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKCAMERAFOCUSNPC___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
