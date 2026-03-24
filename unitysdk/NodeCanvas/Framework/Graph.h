#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphCustomData_Meta.h"
#include "unitysdk/NodeCanvas/Framework/Graph_UpdateMode.h"
#include "unitysdk/NodeCanvas/Framework/Internal/GraphLoadData.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class CanvasGroup; }
namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class GraphCustomData; }
namespace NodeCanvas::Framework { class GraphOwner; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class IGraphElement; }
namespace NodeCanvas::Framework { class Node; }
namespace NodeCanvas::Framework { class Task; }
namespace NodeCanvas::Framework::Internal { class BlackboardSource; }
namespace NodeCanvas::Framework::Internal { class GraphSource; }
namespace ParadoxNotion { class HierarchyTree_Element; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define NODECANVAS_FRAMEWORK_GRAPH_ADDNODE_1_OFFSET UNITYSDK_OFFSET(0x196E9DA0)
#define NODECANVAS_FRAMEWORK_GRAPH_ADDNODE_OFFSET UNITYSDK_OFFSET(0x196E9D50)
#define NODECANVAS_FRAMEWORK_GRAPH_ADD_DELAYEDINITCALLS_OFFSET UNITYSDK_OFFSET(0x196E6230)
#define NODECANVAS_FRAMEWORK_GRAPH_ADD_ONFINISH_OFFSET UNITYSDK_OFFSET(0x196E5600)
#define NODECANVAS_FRAMEWORK_GRAPH_ADD_ONGRAPHDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x196E31E0)
#define NODECANVAS_FRAMEWORK_GRAPH_ADD_ONGRAPHSERIALIZED_OFFSET UNITYSDK_OFFSET(0x196E3080)
#define NODECANVAS_FRAMEWORK_GRAPH_ASSIGNNODEID_OFFSET UNITYSDK_OFFSET(0x196E60E0)
#define NODECANVAS_FRAMEWORK_GRAPH_CLEARGRAPH_OFFSET UNITYSDK_OFFSET(0x196EB260)
#define NODECANVAS_FRAMEWORK_GRAPH_CLONENODES_OFFSET UNITYSDK_OFFSET(0x196EA820)
#define NODECANVAS_FRAMEWORK_GRAPH_COLLECTSUBELEMENTS_OFFSET UNITYSDK_OFFSET(0x196E9320)
#define NODECANVAS_FRAMEWORK_GRAPH_CONNECTNODES_OFFSET UNITYSDK_OFFSET(0x196EA7C0)
#define NODECANVAS_FRAMEWORK_GRAPH_DELAYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x196E3990)
#define NODECANVAS_FRAMEWORK_GRAPH_DESERIALIZEBIN_OFFSET UNITYSDK_OFFSET(0x196E51A0)
#define NODECANVAS_FRAMEWORK_GRAPH_DESERIALIZELOCALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x196E5500)
#define NODECANVAS_FRAMEWORK_GRAPH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x196E44C0)
#define NODECANVAS_FRAMEWORK_GRAPH_DIGNESTEDGRAPHS_OFFSET UNITYSDK_OFFSET(0x196E9090)
#define NODECANVAS_FRAMEWORK_GRAPH_GETALLCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x196E7CD0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETALLINSTANCEDNESTEDGRAPHS_OFFSET UNITYSDK_OFFSET(0x196E7FF0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETALLPARAMETERS_OFFSET UNITYSDK_OFFSET(0x196E7CB0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETDEFINEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x196E86D0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETELEMENTGRAPH_OFFSET UNITYSDK_OFFSET(0x196E8B10)
#define NODECANVAS_FRAMEWORK_GRAPH_GETFLATMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E8C70)
#define NODECANVAS_FRAMEWORK_GRAPH_GETFULLMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E8EE0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETGRAPHSOURCEMETADATACOPY_OFFSET UNITYSDK_OFFSET(0x196E5380)
#define NODECANVAS_FRAMEWORK_GRAPH_GETGRAPHSOURCE_OFFSET UNITYSDK_OFFSET(0x196E5310)
#define NODECANVAS_FRAMEWORK_GRAPH_GETLEAFNODES_OFFSET UNITYSDK_OFFSET(0x196E7EE0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETNESTEDMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E9020)
#define NODECANVAS_FRAMEWORK_GRAPH_GETNODEWITHID_OFFSET UNITYSDK_OFFSET(0x196E7CF0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETPARAMETERPARENTELEMENT_OFFSET UNITYSDK_OFFSET(0x196E9830)
#define NODECANVAS_FRAMEWORK_GRAPH_GETPARAMETERSINELEMENT_OFFSET UNITYSDK_OFFSET(0x196E9C30)
#define NODECANVAS_FRAMEWORK_GRAPH_GETROOTNODES_OFFSET UNITYSDK_OFFSET(0x196E7DD0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETSERIALIZEDJSONDATA_OFFSET UNITYSDK_OFFSET(0x196E5320)
#define NODECANVAS_FRAMEWORK_GRAPH_GETSERIALIZEDREFERENCESDATA_OFFSET UNITYSDK_OFFSET(0x196E5330)
#define NODECANVAS_FRAMEWORK_GRAPH_GETTASKPARENTELEMENT_OFFSET UNITYSDK_OFFSET(0x196E97B0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETTASKSINELEMENT_OFFSET UNITYSDK_OFFSET(0x196E98B0)
#define NODECANVAS_FRAMEWORK_GRAPH_GETTREENODEELEMENT_OFFSET UNITYSDK_OFFSET(0x196E8D50)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_AGENT_OFFSET UNITYSDK_OFFSET(0x196E5CC0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ALLCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x196E5920)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ALLNODES_OFFSET UNITYSDK_OFFSET(0x196E55C0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ALLPARAMETERS_OFFSET UNITYSDK_OFFSET(0x196E5900)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ALLTASKS_OFFSET UNITYSDK_OFFSET(0x196E55E0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x196E5CE0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_CANVASGROUPS_OFFSET UNITYSDK_OFFSET(0x196E58C0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x196E57A0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x196E57E0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x196E5A40)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_DIDUPDATELASTFRAME_OFFSET UNITYSDK_OFFSET(0x196E5A80)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x196E5A20)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_FLATMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5720)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_FULLMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5740)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_GRAPHSOURCE_OFFSET UNITYSDK_OFFSET(0x196E5780)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_HASINITIALIZED_OFFSET UNITYSDK_OFFSET(0x196E5700)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x196E5AC0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x196E5AA0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_LASTUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x196E5A60)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_LOCALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x196E54E0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_NESTEDMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5760)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_PARENTBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x196E5D00)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_PARENTGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5A00)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_PRIMENODE_OFFSET UNITYSDK_OFFSET(0x196E5B00)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ROOTGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5940)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_RUNNINGGRAPHS_OFFSET UNITYSDK_OFFSET(0x196E59F0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_SERIALIZATIONHALTED_OFFSET UNITYSDK_OFFSET(0x196E59E0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_SERIALIZEDBINARY_OFFSET UNITYSDK_OFFSET(0x196E3970)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_SERIALIZEDGRAPH_OFFSET UNITYSDK_OFFSET(0x196E3960)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x196E5820)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x196E5AE0)
#define NODECANVAS_FRAMEWORK_GRAPH_GET_ZOOMFACTOR_OFFSET UNITYSDK_OFFSET(0x196E5860)
#define NODECANVAS_FRAMEWORK_GRAPH_INITIALIZEMACRO_OFFSET UNITYSDK_OFFSET(0x196E7760)
#define NODECANVAS_FRAMEWORK_GRAPH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x196E6610)
#define NODECANVAS_FRAMEWORK_GRAPH_LOADOVERWRITEASYNC_OFFSET UNITYSDK_OFFSET(0x196E63C0)
#define NODECANVAS_FRAMEWORK_GRAPH_LOADOVERWRITE_OFFSET UNITYSDK_OFFSET(0x196E6480)
#define NODECANVAS_FRAMEWORK_GRAPH_NODECANVAS_FRAMEWORK_ITASKSYSTEM_GET_CONTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x196E5D20)
#define NODECANVAS_FRAMEWORK_GRAPH_NODECANVAS_FRAMEWORK_ITASKSYSTEM_UPDATETASKSOWNER_OFFSET UNITYSDK_OFFSET(0x196E6080)
#define NODECANVAS_FRAMEWORK_GRAPH_ONDERIVEDDATADESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x196E7750)
#define NODECANVAS_FRAMEWORK_GRAPH_ONDERIVEDDATASERIALIZATION_OFFSET UNITYSDK_OFFSET(0x196E7740)
#define NODECANVAS_FRAMEWORK_GRAPH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x196E3EB0)
#define NODECANVAS_FRAMEWORK_GRAPH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x196E3EA0)
#define NODECANVAS_FRAMEWORK_GRAPH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x196E3D80)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHINITIALIZE_OFFSET UNITYSDK_OFFSET(0x196E7770)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x196E77F0)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHOBJECTDISABLE_OFFSET UNITYSDK_OFFSET(0x196E77E0)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x196E77D0)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x196E77B0)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x196E7780)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x196E77A0)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHUNPAUSED_OFFSET UNITYSDK_OFFSET(0x196E77C0)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHUPDATE_OFFSET UNITYSDK_OFFSET(0x196E7790)
#define NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHVALIDATE_OFFSET UNITYSDK_OFFSET(0x196E7800)
#define NODECANVAS_FRAMEWORK_GRAPH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x196E4090)
#define NODECANVAS_FRAMEWORK_GRAPH_PAUSE_OFFSET UNITYSDK_OFFSET(0x196E71C0)
#define NODECANVAS_FRAMEWORK_GRAPH_PREINITIALIZESUBGRAPHS_OFFSET UNITYSDK_OFFSET(0x196E6670)
#define NODECANVAS_FRAMEWORK_GRAPH_PROMOTEMISSINGPARAMETERSTOVARIABLES_OFFSET UNITYSDK_OFFSET(0x196E87E0)
#define NODECANVAS_FRAMEWORK_GRAPH_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x196EA5B0)
#define NODECANVAS_FRAMEWORK_GRAPH_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x196EA030)
#define NODECANVAS_FRAMEWORK_GRAPH_REMOVE_DELAYEDINITCALLS_OFFSET UNITYSDK_OFFSET(0x196E62A0)
#define NODECANVAS_FRAMEWORK_GRAPH_REMOVE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x196E5680)
#define NODECANVAS_FRAMEWORK_GRAPH_REMOVE_ONGRAPHDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x196E3290)
#define NODECANVAS_FRAMEWORK_GRAPH_REMOVE_ONGRAPHSERIALIZED_OFFSET UNITYSDK_OFFSET(0x196E3130)
#define NODECANVAS_FRAMEWORK_GRAPH_RESET_OFFSET UNITYSDK_OFFSET(0x196E40A0)
#define NODECANVAS_FRAMEWORK_GRAPH_RESTART_OFFSET UNITYSDK_OFFSET(0x196E7690)
#define NODECANVAS_FRAMEWORK_GRAPH_RESUME_OFFSET UNITYSDK_OFFSET(0x196E6B80)
#define NODECANVAS_FRAMEWORK_GRAPH_SELFDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x196E38F0)
#define NODECANVAS_FRAMEWORK_GRAPH_SELFSERIALIZE_OFFSET UNITYSDK_OFFSET(0x196E3450)
#define NODECANVAS_FRAMEWORK_GRAPH_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x196E7810)
#define NODECANVAS_FRAMEWORK_GRAPH_SENDGLOBALEVENT_OFFSET UNITYSDK_OFFSET(0x196E7A20)
#define NODECANVAS_FRAMEWORK_GRAPH_SERIALIZEBINARY_OFFSET UNITYSDK_OFFSET(0x196E4410)
#define NODECANVAS_FRAMEWORK_GRAPH_SERIALIZELOCALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x196E5440)
#define NODECANVAS_FRAMEWORK_GRAPH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x196E40B0)
#define NODECANVAS_FRAMEWORK_GRAPH_SETGRAPHSOURCEMETADATA_OFFSET UNITYSDK_OFFSET(0x196E53F0)
#define NODECANVAS_FRAMEWORK_GRAPH_SETSERIALIZEDGRAPHREFTOORIGIN_OFFSET UNITYSDK_OFFSET(0x196E3060)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_AGENT_OFFSET UNITYSDK_OFFSET(0x196E5CD0)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_ALLNODES_OFFSET UNITYSDK_OFFSET(0x196E58A0)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_CANVASGROUPS_OFFSET UNITYSDK_OFFSET(0x196E58E0)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x196E57C0)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x196E5800)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x196E5A50)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x196E5A30)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_FLATMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5730)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_FULLMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5750)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_GRAPHSOURCE_OFFSET UNITYSDK_OFFSET(0x196E5790)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_HASINITIALIZED_OFFSET UNITYSDK_OFFSET(0x196E5710)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x196E5AD0)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x196E5AB0)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_LASTUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x196E5A70)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_LOCALBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x196E55A0)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_NESTEDMETAGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5770)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_PARENTBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x196E5D10)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_PARENTGRAPH_OFFSET UNITYSDK_OFFSET(0x196E5A10)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_PRIMENODE_OFFSET UNITYSDK_OFFSET(0x196E5B90)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x196E5840)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x196E5AF0)
#define NODECANVAS_FRAMEWORK_GRAPH_SET_ZOOMFACTOR_OFFSET UNITYSDK_OFFSET(0x196E5880)
#define NODECANVAS_FRAMEWORK_GRAPH_STARTGRAPH_1_OFFSET UNITYSDK_OFFSET(0x196EB3B0)
#define NODECANVAS_FRAMEWORK_GRAPH_STARTGRAPH_OFFSET UNITYSDK_OFFSET(0x196E24F0)
#define NODECANVAS_FRAMEWORK_GRAPH_STOP_OFFSET UNITYSDK_OFFSET(0x196E6D20)
#define NODECANVAS_FRAMEWORK_GRAPH_THREADSAFEINITCALL_OFFSET UNITYSDK_OFFSET(0x196E6310)
#define NODECANVAS_FRAMEWORK_GRAPH_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x196E3770)
#define NODECANVAS_FRAMEWORK_GRAPH_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x196E3340)
#define NODECANVAS_FRAMEWORK_GRAPH_UPDATEGRAPH_1_OFFSET UNITYSDK_OFFSET(0x196E76E0)
#define NODECANVAS_FRAMEWORK_GRAPH_UPDATEGRAPH_OFFSET UNITYSDK_OFFSET(0x196E2FB0)
#define NODECANVAS_FRAMEWORK_GRAPH_UPDATENODEBBFIELDS_OFFSET UNITYSDK_OFFSET(0x196E5F50)
#define NODECANVAS_FRAMEWORK_GRAPH_UPDATENODEIDS_OFFSET UNITYSDK_OFFSET(0x196E4910)
#define NODECANVAS_FRAMEWORK_GRAPH_UPDATEREFERENCESFROMOWNER_OFFSET UNITYSDK_OFFSET(0x196E5D30)
#define NODECANVAS_FRAMEWORK_GRAPH_UPDATEREFERENCES_OFFSET UNITYSDK_OFFSET(0x196E5DE0)
#define NODECANVAS_FRAMEWORK_GRAPH_VALIDATE_OFFSET UNITYSDK_OFFSET(0x196E3A80)
#define NODECANVAS_FRAMEWORK_GRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x196EB3E0)
#define NODECANVAS_FRAMEWORK_GRAPH__SELFSERIALIZE_G___LISTEQUALS_28_0_OFFSET UNITYSDK_OFFSET(0x196E4190)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph_TypeDefinitionIndex = 27303;

	class Graph : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Action_1<::NodeCanvas::Framework::Graph*>** StaticGet_onGraphSerialized()
		{
			return (::System::Action_1<::NodeCanvas::Framework::Graph*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_TypeDefinitionIndex)->GetStaticField(0x1F2B0);
		}
		static ::System::Action_1<::NodeCanvas::Framework::Graph*>** StaticGet_onGraphDeserialized()
		{
			return (::System::Action_1<::NodeCanvas::Framework::Graph*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_TypeDefinitionIndex)->GetStaticField(0x1F2B8);
		}
		static ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Graph*>** StaticGet__runningGraphs()
		{
			return (::System::Collections::Generic::List_1<::NodeCanvas::Framework::Graph*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_TypeDefinitionIndex)->GetStaticField(0x1F2C0);
		}
		::System::String* _serializedGraph; // 0x18
		::NodeCanvas::Framework::GraphCustomData* _serializedBinary; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _objectReferences; // 0x28
		::NodeCanvas::Framework::Internal::GraphSource* _graphSource; // 0x30
		::System::Boolean _haltSerialization; // 0x38
		::System::Boolean haltForUndo; // 0x39
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Graph*>* instancedSubGraphs; // 0x40
		::System::Boolean _isDelayDeserialize; // 0x48
		::System::Action_1<::System::Boolean>* onFinish; // 0x50
		::System::Boolean _hasInitialized_k__BackingField; // 0x58
		::ParadoxNotion::HierarchyTree_Element* _flatMetaGraph_k__BackingField; // 0x60
		::ParadoxNotion::HierarchyTree_Element* _fullMetaGraph_k__BackingField; // 0x68
		::ParadoxNotion::HierarchyTree_Element* _nestedMetaGraph_k__BackingField; // 0x70
		::NodeCanvas::Framework::Graph* _parentGraph_k__BackingField; // 0x78
		::System::Single _elapsedTime_k__BackingField; // 0x80
		::System::Single _deltaTime_k__BackingField; // 0x84
		::System::Int32 _lastUpdateFrame_k__BackingField; // 0x88
		::System::Boolean _isRunning_k__BackingField; // 0x8C
		::System::Boolean _isPaused_k__BackingField; // 0x8D
		::NodeCanvas::Framework::Graph_UpdateMode _updateMode_k__BackingField; // 0x90
		::UnityEngine::Component* _agent_k__BackingField; // 0x98
		::NodeCanvas::Framework::IBlackboard* _parentBlackboard_k__BackingField; // 0xA0
		::System::Action* delayedInitCalls; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH__CTOR_OFFSET))(this);
		}

		::System::Void SetSerializedGraphRefToOrigin(::NodeCanvas::Framework::Graph* originAsset)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SETSERIALIZEDGRAPHREFTOORIGIN_OFFSET))(this, originAsset);
		}

		static ::System::Void add_onGraphSerialized(::System::Action_1<::NodeCanvas::Framework::Graph*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::Framework::Graph*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ADD_ONGRAPHSERIALIZED_OFFSET))(value);
		}

		static ::System::Void remove_onGraphSerialized(::System::Action_1<::NodeCanvas::Framework::Graph*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::Framework::Graph*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_REMOVE_ONGRAPHSERIALIZED_OFFSET))(value);
		}

		static ::System::Void add_onGraphDeserialized(::System::Action_1<::NodeCanvas::Framework::Graph*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::Framework::Graph*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ADD_ONGRAPHDESERIALIZED_OFFSET))(value);
		}

		static ::System::Void remove_onGraphDeserialized(::System::Action_1<::NodeCanvas::Framework::Graph*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::Framework::Graph*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_REMOVE_ONGRAPHDESERIALIZED_OFFSET))(value);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::String* get_SerializedGraph()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_SERIALIZEDGRAPH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SerializedBinary()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_SERIALIZEDBINARY_OFFSET))(this);
		}

		::System::Void DelayDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_DELAYDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_RESET_OFFSET))(this);
		}

		::System::Boolean SelfSerialize(::System::Boolean isForce)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SELFSERIALIZE_OFFSET))(this, isForce);
		}

		::System::Boolean SelfDeserialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SELFDESERIALIZE_OFFSET))(this);
		}

		::System::String* Serialize(::System::Collections::Generic::List_1<::UnityEngine::Object*>* references)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SERIALIZE_OFFSET))(this, references);
		}

		::Il2CppArray<::System::Byte>* SerializeBinary(::System::Collections::Generic::List_1<::UnityEngine::Object*>* references, ::Il2CppArray<::NodeCanvas::Framework::GraphCustomData_Meta>*& outputMetas)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::Il2CppArray<::NodeCanvas::Framework::GraphCustomData_Meta>*&))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SERIALIZEBINARY_OFFSET))(this, references, outputMetas);
		}

		::System::Boolean Deserialize(::System::String* serializedGraph, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* references, ::System::Boolean validate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_DESERIALIZE_OFFSET))(this, serializedGraph, references, validate);
		}

		::System::Boolean DeserializeBin(::System::Collections::Generic::List_1<::UnityEngine::Object*>* unityReferences, ::System::Boolean validate)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_DESERIALIZEBIN_OFFSET))(this, unityReferences, validate);
		}

		::NodeCanvas::Framework::Internal::GraphSource* GetGraphSource()
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETGRAPHSOURCE_OFFSET))(this);
		}

		::System::String* GetSerializedJsonData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETSERIALIZEDJSONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Object*>* GetSerializedReferencesData()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETSERIALIZEDREFERENCESDATA_OFFSET))(this);
		}

		::NodeCanvas::Framework::Internal::GraphSource* GetGraphSourceMetaDataCopy()
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETGRAPHSOURCEMETADATACOPY_OFFSET))(this);
		}

		::System::Void SetGraphSourceMetaData(::NodeCanvas::Framework::Internal::GraphSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Internal::GraphSource*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SETGRAPHSOURCEMETADATA_OFFSET))(this, source);
		}

		::System::String* SerializeLocalBlackboard(::System::Collections::Generic::List_1<::UnityEngine::Object*>*& references)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*&))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SERIALIZELOCALBLACKBOARD_OFFSET))(this, references);
		}

		::System::Boolean DeserializeLocalBlackboard(::System::String* json, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* references)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_DESERIALIZELOCALBLACKBOARD_OFFSET))(this, json, references);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_VALIDATE_OFFSET))(this);
		}

		::System::Void add_onFinish(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ADD_ONFINISH_OFFSET))(this, value);
		}

		::System::Void remove_onFinish(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_REMOVE_ONFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_hasInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_HASINITIALIZED_OFFSET))(this);
		}

		::System::Void set_hasInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_HASINITIALIZED_OFFSET))(this, value);
		}

		::ParadoxNotion::HierarchyTree_Element* get_flatMetaGraph()
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_FLATMETAGRAPH_OFFSET))(this);
		}

		::System::Void set_flatMetaGraph(::ParadoxNotion::HierarchyTree_Element* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::HierarchyTree_Element*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_FLATMETAGRAPH_OFFSET))(this, value);
		}

		::ParadoxNotion::HierarchyTree_Element* get_fullMetaGraph()
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_FULLMETAGRAPH_OFFSET))(this);
		}

		::System::Void set_fullMetaGraph(::ParadoxNotion::HierarchyTree_Element* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::HierarchyTree_Element*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_FULLMETAGRAPH_OFFSET))(this, value);
		}

		::ParadoxNotion::HierarchyTree_Element* get_nestedMetaGraph()
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_NESTEDMETAGRAPH_OFFSET))(this);
		}

		::System::Void set_nestedMetaGraph(::ParadoxNotion::HierarchyTree_Element* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::HierarchyTree_Element*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_NESTEDMETAGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Internal::GraphSource* get_graphSource()
		{
			return ((::NodeCanvas::Framework::Internal::GraphSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_GRAPHSOURCE_OFFSET))(this);
		}

		::System::Void set_graphSource(::NodeCanvas::Framework::Internal::GraphSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Internal::GraphSource*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_GRAPHSOURCE_OFFSET))(this, value);
		}

		::System::String* get_category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_category(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_CATEGORY_OFFSET))(this, value);
		}

		::System::String* get_comments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_COMMENTS_OFFSET))(this);
		}

		::System::Void set_comments(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_COMMENTS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_translation()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_TRANSLATION_OFFSET))(this);
		}

		::System::Void set_translation(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_TRANSLATION_OFFSET))(this, value);
		}

		::System::Single get_zoomFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ZOOMFACTOR_OFFSET))(this);
		}

		::System::Void set_zoomFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_ZOOMFACTOR_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>* get_allNodes()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ALLNODES_OFFSET))(this);
		}

		::System::Void set_allNodes(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_ALLNODES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>* get_canvasGroups()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_CANVASGROUPS_OFFSET))(this);
		}

		::System::Void set_canvasGroups(::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::CanvasGroup*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_CANVASGROUPS_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Internal::BlackboardSource* get_localBlackboard()
		{
			return ((::NodeCanvas::Framework::Internal::BlackboardSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_LOCALBLACKBOARD_OFFSET))(this);
		}

		::System::Void set_localBlackboard(::NodeCanvas::Framework::Internal::BlackboardSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Internal::BlackboardSource*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_LOCALBLACKBOARD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>* get_allTasks()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Task*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ALLTASKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter*>* get_allParameters()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::BBParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ALLPARAMETERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* get_allConnections()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ALLCONNECTIONS_OFFSET))(this);
		}

		::NodeCanvas::Framework::Graph* get_rootGraph()
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ROOTGRAPH_OFFSET))(this);
		}

		::System::Boolean get_serializationHalted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_SERIALIZATIONHALTED_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Graph*>* get_runningGraphs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Graph*>*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_RUNNINGGRAPHS_OFFSET))();
		}

		::NodeCanvas::Framework::Graph* get_parentGraph()
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_PARENTGRAPH_OFFSET))(this);
		}

		::System::Void set_parentGraph(::NodeCanvas::Framework::Graph* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_PARENTGRAPH_OFFSET))(this, value);
		}

		::System::Single get_elapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ELAPSEDTIME_OFFSET))(this);
		}

		::System::Void set_elapsedTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_ELAPSEDTIME_OFFSET))(this, value);
		}

		::System::Single get_deltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void set_deltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_DELTATIME_OFFSET))(this, value);
		}

		::System::Int32 get_lastUpdateFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_LASTUPDATEFRAME_OFFSET))(this);
		}

		::System::Void set_lastUpdateFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_LASTUPDATEFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_didUpdateLastFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_DIDUPDATELASTFRAME_OFFSET))(this);
		}

		::System::Boolean get_isRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void set_isRunning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_ISRUNNING_OFFSET))(this, value);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_isPaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_ISPAUSED_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Graph_UpdateMode get_updateMode()
		{
			return ((::NodeCanvas::Framework::Graph_UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_updateMode(::NodeCanvas::Framework::Graph_UpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph_UpdateMode))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Node* get_primeNode()
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_PRIMENODE_OFFSET))(this);
		}

		::System::Void set_primeNode(::NodeCanvas::Framework::Node* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_PRIMENODE_OFFSET))(this, value);
		}

		::UnityEngine::Component* get_agent()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_AGENT_OFFSET))(this);
		}

		::System::Void set_agent(::UnityEngine::Component* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_AGENT_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::IBlackboard* get_blackboard()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_BLACKBOARD_OFFSET))(this);
		}

		::NodeCanvas::Framework::IBlackboard* get_parentBlackboard()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GET_PARENTBLACKBOARD_OFFSET))(this);
		}

		::System::Void set_parentBlackboard(::NodeCanvas::Framework::IBlackboard* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SET_PARENTBLACKBOARD_OFFSET))(this, value);
		}

		::UnityEngine::Object* NodeCanvas_Framework_ITaskSystem_get_contextObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_NODECANVAS_FRAMEWORK_ITASKSYSTEM_GET_CONTEXTOBJECT_OFFSET))(this);
		}

		::System::Void UpdateReferencesFromOwner(::NodeCanvas::Framework::GraphOwner* owner, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::GraphOwner*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_UPDATEREFERENCESFROMOWNER_OFFSET))(this, owner, force);
		}

		::System::Void UpdateReferences(::UnityEngine::Component* newAgent, ::NodeCanvas::Framework::IBlackboard* newParentBlackboard, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_UPDATEREFERENCES_OFFSET))(this, newAgent, newParentBlackboard, force);
		}

		::System::Void UpdateNodeBBFields()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_UPDATENODEBBFIELDS_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_ITaskSystem_UpdateTasksOwner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_NODECANVAS_FRAMEWORK_ITASKSYSTEM_UPDATETASKSOWNER_OFFSET))(this);
		}

		::System::Void UpdateNodeIDs(::System::Boolean alsoReorderList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_UPDATENODEIDS_OFFSET))(this, alsoReorderList);
		}

		::System::Int32 AssignNodeID(::NodeCanvas::Framework::Node* node, ::System::Int32 lastID, ::Il2CppArray<::NodeCanvas::Framework::Node*>*& parsed)
		{
			return ((::System::Int32(*)(::PVOID, ::NodeCanvas::Framework::Node*, ::System::Int32, ::Il2CppArray<::NodeCanvas::Framework::Node*>*&))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ASSIGNNODEID_OFFSET))(this, node, lastID, parsed);
		}

		::System::Void add_delayedInitCalls(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ADD_DELAYEDINITCALLS_OFFSET))(this, value);
		}

		::System::Void remove_delayedInitCalls(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_REMOVE_DELAYEDINITCALLS_OFFSET))(this, value);
		}

		::System::Void ThreadSafeInitCall(::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_THREADSAFEINITCALL_OFFSET))(this, call);
		}

		::System::Void LoadOverwriteAsync(::NodeCanvas::Framework::Internal::GraphLoadData data, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Internal::GraphLoadData, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_LOADOVERWRITEASYNC_OFFSET))(this, data, callback);
		}

		::System::Void LoadOverwrite(::NodeCanvas::Framework::Internal::GraphLoadData data)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Internal::GraphLoadData))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_LOADOVERWRITE_OFFSET))(this, data);
		}

		::System::Void Initialize(::UnityEngine::Component* newAgent, ::NodeCanvas::Framework::IBlackboard* newParentBlackboard, ::System::Boolean preInitializeSubGraphs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_INITIALIZE_OFFSET))(this, newAgent, newParentBlackboard, preInitializeSubGraphs);
		}

		::System::Void PreInitializeSubGraphs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_PREINITIALIZESUBGRAPHS_OFFSET))(this);
		}

		::System::Void StartGraph(::UnityEngine::Component* newAgent, ::NodeCanvas::Framework::IBlackboard* newParentBlackboard, ::NodeCanvas::Framework::Graph_UpdateMode newUpdateMode, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*, ::NodeCanvas::Framework::Graph_UpdateMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_STARTGRAPH_OFFSET))(this, newAgent, newParentBlackboard, newUpdateMode, callback);
		}

		::System::Void Stop(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_STOP_OFFSET))(this, success);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_RESUME_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_RESTART_OFFSET))(this);
		}

		::System::Void UpdateGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_UPDATEGRAPH_OFFSET))(this);
		}

		::System::Void UpdateGraph_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_UPDATEGRAPH_1_OFFSET))(this, deltaTime);
		}

		::System::Object* OnDerivedDataSerialization()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONDERIVEDDATASERIALIZATION_OFFSET))(this);
		}

		::System::Void OnDerivedDataDeserialization(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONDERIVEDDATADESERIALIZATION_OFFSET))(this, data);
		}

		::System::Void InitializeMacro(::System::Boolean gatherPorts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_INITIALIZEMACRO_OFFSET))(this, gatherPorts);
		}

		::System::Void OnGraphInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHINITIALIZE_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHUPDATE_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Void OnGraphUnpaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHUNPAUSED_OFFSET))(this);
		}

		::System::Void OnGraphObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHOBJECTENABLE_OFFSET))(this);
		}

		::System::Void OnGraphObjectDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHOBJECTDISABLE_OFFSET))(this);
		}

		::System::Void OnGraphObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHOBJECTDESTROY_OFFSET))(this);
		}

		::System::Void OnGraphValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ONGRAPHVALIDATE_OFFSET))(this);
		}

		::System::Void SendEvent(::System::String* name, ::System::Object* value, ::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SENDEVENT_OFFSET))(this, name, value, sender);
		}

		static ::System::Void SendGlobalEvent(::System::String* name, ::System::Object* value, ::System::Object* sender)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_SENDGLOBALEVENT_OFFSET))(name, value, sender);
		}

		::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::BBParameter*>* GetAllParameters()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::BBParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETALLPARAMETERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Connection*>* GetAllConnections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Connection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETALLCONNECTIONS_OFFSET))(this);
		}

		::NodeCanvas::Framework::Node* GetNodeWithID(::System::Int32 searchID)
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETNODEWITHID_OFFSET))(this, searchID);
		}

		::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Node*>* GetRootNodes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Node*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETROOTNODES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Node*>* GetLeafNodes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Node*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETLEAFNODES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Graph*>* GetAllInstancedNestedGraphs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Graph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETALLINSTANCEDNESTEDGRAPHS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::BBParameter*>* GetDefinedParameters()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::BBParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETDEFINEDPARAMETERS_OFFSET))(this);
		}

		::System::Void PromoteMissingParametersToVariables(::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_PROMOTEMISSINGPARAMETERSTOVARIABLES_OFFSET))(this, bb);
		}

		static ::NodeCanvas::Framework::Graph* GetElementGraph(::System::Object* obj)
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETELEMENTGRAPH_OFFSET))(obj);
		}

		::ParadoxNotion::HierarchyTree_Element* GetFlatMetaGraph()
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETFLATMETAGRAPH_OFFSET))(this);
		}

		::ParadoxNotion::HierarchyTree_Element* GetFullMetaGraph()
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETFULLMETAGRAPH_OFFSET))(this);
		}

		::ParadoxNotion::HierarchyTree_Element* GetNestedMetaGraph()
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETNESTEDMETAGRAPH_OFFSET))(this);
		}

		static ::System::Void DigNestedGraphs(::NodeCanvas::Framework::Graph* currentGraph, ::ParadoxNotion::HierarchyTree_Element* currentElement)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::Graph*, ::ParadoxNotion::HierarchyTree_Element*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_DIGNESTEDGRAPHS_OFFSET))(currentGraph, currentElement);
		}

		static ::ParadoxNotion::HierarchyTree_Element* GetTreeNodeElement(::NodeCanvas::Framework::Node* node, ::System::Boolean recurse, ::System::Int32& lastID)
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::NodeCanvas::Framework::Node*, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETTREENODEELEMENT_OFFSET))(node, recurse, lastID);
		}

		static ::ParadoxNotion::HierarchyTree_Element* CollectSubElements(::NodeCanvas::Framework::IGraphElement* obj)
		{
			return ((::ParadoxNotion::HierarchyTree_Element*(*)(::NodeCanvas::Framework::IGraphElement*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_COLLECTSUBELEMENTS_OFFSET))(obj);
		}

		::NodeCanvas::Framework::IGraphElement* GetTaskParentElement(::NodeCanvas::Framework::Task* targetTask)
		{
			return ((::NodeCanvas::Framework::IGraphElement*(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETTASKPARENTELEMENT_OFFSET))(this, targetTask);
		}

		::NodeCanvas::Framework::IGraphElement* GetParameterParentElement(::NodeCanvas::Framework::BBParameter* targetParameter)
		{
			return ((::NodeCanvas::Framework::IGraphElement*(*)(::PVOID, ::NodeCanvas::Framework::BBParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETPARAMETERPARENTELEMENT_OFFSET))(this, targetParameter);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Task*>* GetTasksInElement(::NodeCanvas::Framework::IGraphElement* target)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Task*>*(*)(::NodeCanvas::Framework::IGraphElement*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETTASKSINELEMENT_OFFSET))(target);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::BBParameter*>* GetParametersInElement(::NodeCanvas::Framework::IGraphElement* target)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::BBParameter*>*(*)(::NodeCanvas::Framework::IGraphElement*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_GETPARAMETERSINELEMENT_OFFSET))(target);
		}

		::NodeCanvas::Framework::Node* AddNode(::System::Type* nodeType)
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ADDNODE_OFFSET))(this, nodeType);
		}

		::NodeCanvas::Framework::Node* AddNode_1(::System::Type* nodeType, ::UnityEngine::Vector2 pos)
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID, ::System::Type*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_ADDNODE_1_OFFSET))(this, nodeType, pos);
		}

		::System::Void RemoveNode(::NodeCanvas::Framework::Node* node, ::System::Boolean recordUndo, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Node*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_REMOVENODE_OFFSET))(this, node, recordUndo, force);
		}

		::NodeCanvas::Framework::Connection* ConnectNodes(::NodeCanvas::Framework::Node* sourceNode, ::NodeCanvas::Framework::Node* targetNode, ::System::Int32 sourceIndex, ::System::Int32 targetIndex)
		{
			return ((::NodeCanvas::Framework::Connection*(*)(::PVOID, ::NodeCanvas::Framework::Node*, ::NodeCanvas::Framework::Node*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_CONNECTNODES_OFFSET))(this, sourceNode, targetNode, sourceIndex, targetIndex);
		}

		::System::Void RemoveConnection(::NodeCanvas::Framework::Connection* connection, ::System::Boolean recordUndo)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Connection*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_REMOVECONNECTION_OFFSET))(this, connection, recordUndo);
		}

		static ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>* CloneNodes(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>* originalNodes, ::NodeCanvas::Framework::Graph* targetGraph, ::UnityEngine::Vector2 originPosition)
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>*(*)(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>*, ::NodeCanvas::Framework::Graph*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_CLONENODES_OFFSET))(originalNodes, targetGraph, originPosition);
		}

		::System::Void ClearGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_CLEARGRAPH_OFFSET))(this);
		}

		::System::Void StartGraph_1(::UnityEngine::Component* newAgent, ::NodeCanvas::Framework::IBlackboard* newBlackboard, ::System::Boolean autoUpdate, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH_STARTGRAPH_1_OFFSET))(this, newAgent, newBlackboard, autoUpdate, callback);
		}

		static ::System::Boolean _SelfSerialize_g___ListEquals_28_0(::System::Collections::Generic::List_1<::UnityEngine::Object*>* left, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* right)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH__SELFSERIALIZE_G___LISTEQUALS_28_0_OFFSET))(left, right);
		}
	};
}
