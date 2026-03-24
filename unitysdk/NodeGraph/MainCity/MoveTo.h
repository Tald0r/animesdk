#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace NodeGraph::MainCity { class NavigateContainer; }
namespace NodeGraph::MainCity { class SimpleInteractionPoint; }
namespace SimpleJSON { class JSONNode; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_MOVETO_GETTARGETFORWARD_OFFSET UNITYSDK_OFFSET(0x6A12260)
#define NODEGRAPH_MAINCITY_MOVETO_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x6A12060)
#define NODEGRAPH_MAINCITY_MOVETO_HANDLEPLAYERNAVIGATEDONEACTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x6A15BB0)
#define NODEGRAPH_MAINCITY_MOVETO_HANDLEPLAYERNAVIGATEDONEACTION_OFFSET UNITYSDK_OFFSET(0x6A15460)
#define NODEGRAPH_MAINCITY_MOVETO_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x6A12AF0)
#define NODEGRAPH_MAINCITY_MOVETO_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x6A16330)
#define NODEGRAPH_MAINCITY_MOVETO_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x6A14320)
#define NODEGRAPH_MAINCITY_MOVETO_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x6A12640)
#define NODEGRAPH_MAINCITY_MOVETO_ONSTOPMOVEHANDLE_OFFSET UNITYSDK_OFFSET(0x6A15610)
#define NODEGRAPH_MAINCITY_MOVETO_STARTNEWMOVETO_OFFSET UNITYSDK_OFFSET(0x6A13510)
#define NODEGRAPH_MAINCITY_MOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x6A11D80)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_0_OFFSET UNITYSDK_OFFSET(0x6A16670)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_1_OFFSET UNITYSDK_OFFSET(0x6A166A0)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_2_OFFSET UNITYSDK_OFFSET(0x6A16B60)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_3_OFFSET UNITYSDK_OFFSET(0x6A16B90)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_4_OFFSET UNITYSDK_OFFSET(0x6A16BC0)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_5_OFFSET UNITYSDK_OFFSET(0x6A16BF0)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_6_OFFSET UNITYSDK_OFFSET(0x6A16C20)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_7_OFFSET UNITYSDK_OFFSET(0x6A16C50)
#define NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x6A16C80)
#define NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x6A16CF0)
#define NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x6A16D50)
#define NODEGRAPH_MAINCITY_MOVETO___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x6A16DD0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int MoveTo_TypeDefinitionIndex = 48173;

	class MoveTo : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* TargetPosInput; // 0x58
		::NodeGraph::GraphInputValuePort* _hasTurnAniPort; // 0x60
		::NodeGraph::GraphInputValuePort* MaxWaitIdleTimeInput; // 0x68
		::NodeGraph::MainCity::NavigateContainer* _navigateContainer; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* _path; // 0x78
		::NodeGraph::MainCity::SimpleInteractionPoint* _targetPoint; // 0x80
		::NodeGraph::GraphOutputPort* _onMoveEnd; // 0x88
		::System::Single MaxWaitIdleTime; // 0x90
		::System::Boolean _noTurnAnim; // 0x94
		::System::Boolean _oldWalking; // 0x95
		::System::Boolean accurate; // 0x96
		::System::Boolean _teleporting; // 0x97
		::System::Single _timer; // 0x98
		::System::Single minAngle; // 0x9C
		::System::Int32 _currentIndex; // 0xA0
		::System::Single maxAngle; // 0xA4
		::System::Boolean needDetour; // 0xA8
		::System::Single CheckStandTime; // 0xAC
		::System::Boolean _waitFrame; // 0xB0
		::System::Boolean _processed; // 0xB1
		::System::Boolean moveLocalAvatar; // 0xB2
		::System::Boolean useNavMesh; // 0xB3
		::System::Int32 targetNpcTag; // 0xB4
		::System::Single MaxTime; // 0xB8
		::System::Single range; // 0xBC

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_GETTARGETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_GETTARGETFORWARD_OFFSET))(this);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState StartNewMoveTo()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_STARTNEWMOVETO_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnStopMoveHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONSTOPMOVEHANDLE_OFFSET))(this, obj);
		}

		::System::Void HandlePlayerNavigateDoneAction_Clear(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_HANDLEPLAYERNAVIGATEDONEACTION_CLEAR_OFFSET))(this, entity);
		}

		::System::Void HandlePlayerNavigateDoneAction(::MoleMole::Battle::Entity* entity, ::System::Boolean overtime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_HANDLEPLAYERNAVIGATEDONEACTION_OFFSET))(this, entity, overtime);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__28_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_3_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_4(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_4_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_5(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_5_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_6(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_6_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_7(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_7_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
