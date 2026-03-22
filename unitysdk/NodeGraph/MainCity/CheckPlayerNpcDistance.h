#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x6B6A910)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_HANDLE_OFFSET UNITYSDK_OFFSET(0x6B6A7F0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x6B6A420)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x6B6ACA0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x6B6AEB0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x6B6A190)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x6B6A860)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x6B6A180)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__ONREGISTERPARAM_B__8_0_OFFSET UNITYSDK_OFFSET(0x6B6B0C0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__ONREGISTERPARAM_B__8_1_OFFSET UNITYSDK_OFFSET(0x6B6B0F0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__ONREGISTERPARAM_B__8_2_OFFSET UNITYSDK_OFFSET(0x6B6B120)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__ONREGISTERPARAM_B__8_3_OFFSET UNITYSDK_OFFSET(0x6B6B150)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x6B6B180)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x6B6B1E0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x6B6B1F0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x6B6B250)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x6B6B2B0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x6B6B2C0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckPlayerNpcDistance_TypeDefinitionIndex = 43937;

	class CheckPlayerNpcDistance : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::MoleMole::Battle::Entity* _localAvatar; // 0x88
		::MoleMole::Battle::Entity* _npc; // 0x90
		::System::Single checkDis; // 0x98
		::System::Boolean checkInPhotoPage; // 0x9C
		::System::Boolean _thisPhotoPageChecked; // 0x9D
		::System::Boolean nearDis; // 0x9E
		::System::Int32 checkNpcTag; // 0xA0

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void Handle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_HANDLE_OFFSET))(this, obj);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONTRIGGER_OFFSET))(this);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_CHECKCONDITION_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE_ONNODEEND_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__8_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__ONREGISTERPARAM_B__8_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__8_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__ONREGISTERPARAM_B__8_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__8_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__ONREGISTERPARAM_B__8_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__8_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE__ONREGISTERPARAM_B__8_3_OFFSET))(this, node);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_CHECKCONDITION_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONNODEEND_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}

		::System::Void __base_OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERNPCDISTANCE___BASE_ONTRIGGER_OFFSET))(this);
		}
	};
}
