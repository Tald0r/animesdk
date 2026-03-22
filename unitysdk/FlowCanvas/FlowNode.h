#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Node.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace FlowCanvas { class FlowGraph; }
namespace FlowCanvas { class FlowHandler; }
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class Port; }
namespace FlowCanvas { class ValueHandlerObject; }
namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas { class ValueOutput; }
namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace NodeCanvas::Framework { class Graph; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define FLOWCANVAS_FLOWNODE_ADDFLOWINPUT_1_OFFSET UNITYSDK_OFFSET(0x19C76060)
#define FLOWCANVAS_FLOWNODE_ADDFLOWINPUT_OFFSET UNITYSDK_OFFSET(0x19C763A0)
#define FLOWCANVAS_FLOWNODE_ADDFLOWOUTPUT_OFFSET UNITYSDK_OFFSET(0x19C76150)
#define FLOWCANVAS_FLOWNODE_ADDVALUEINPUT_1_OFFSET UNITYSDK_OFFSET(0x19C76230)
#define FLOWCANVAS_FLOWNODE_ADDVALUEINPUT_OFFSET UNITYSDK_OFFSET(0x19C764C0)
#define FLOWCANVAS_FLOWNODE_ADDVALUEOUTPUT_1_OFFSET UNITYSDK_OFFSET(0x19C764D0)
#define FLOWCANVAS_FLOWNODE_ADDVALUEOUTPUT_OFFSET UNITYSDK_OFFSET(0x19C76310)
#define FLOWCANVAS_FLOWNODE_ASSIGNSELFINSTANCEPORT_OFFSET UNITYSDK_OFFSET(0x19C74EB0)
#define FLOWCANVAS_FLOWNODE_BINDPORTS_OFFSET UNITYSDK_OFFSET(0x19C741D0)
#define FLOWCANVAS_FLOWNODE_CALLOUTPUTBYNETWORK_OFFSET UNITYSDK_OFFSET(0x19C76350)
#define FLOWCANVAS_FLOWNODE_CHECKREVERSEIDEQUALITY_OFFSET UNITYSDK_OFFSET(0x19C765C0)
#define FLOWCANVAS_FLOWNODE_DESERIALIZEINPUTPORTVALUES_OFFSET UNITYSDK_OFFSET(0x19C75CC0)
#define FLOWCANVAS_FLOWNODE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x19C76330)
#define FLOWCANVAS_FLOWNODE_GATHERPORTS_OFFSET UNITYSDK_OFFSET(0x19C735D0)
#define FLOWCANVAS_FLOWNODE_GETALLPORTS_OFFSET UNITYSDK_OFFSET(0x19C74820)
#define FLOWCANVAS_FLOWNODE_GETFIRSTINPUTOFTYPE_OFFSET UNITYSDK_OFFSET(0x19C74BA0)
#define FLOWCANVAS_FLOWNODE_GETFIRSTOUTPUTOFTYPE_OFFSET UNITYSDK_OFFSET(0x19C74D30)
#define FLOWCANVAS_FLOWNODE_GETINPUTFLOWPORTS_OFFSET UNITYSDK_OFFSET(0x19C74A20)
#define FLOWCANVAS_FLOWNODE_GETINPUTPORT_OFFSET UNITYSDK_OFFSET(0x19C74560)
#define FLOWCANVAS_FLOWNODE_GETINPUTVALUEPORTS_OFFSET UNITYSDK_OFFSET(0x19C74AE0)
#define FLOWCANVAS_FLOWNODE_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x19C77E20)
#define FLOWCANVAS_FLOWNODE_GETOUTPUTFLOWPORTS_OFFSET UNITYSDK_OFFSET(0x19C748A0)
#define FLOWCANVAS_FLOWNODE_GETOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0x19C746C0)
#define FLOWCANVAS_FLOWNODE_GETOUTPUTVALUEPORTS_OFFSET UNITYSDK_OFFSET(0x19C74960)
#define FLOWCANVAS_FLOWNODE_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19C73860)
#define FLOWCANVAS_FLOWNODE_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x19C72F20)
#define FLOWCANVAS_FLOWNODE_GET_CANSELFCONNECT_OFFSET UNITYSDK_OFFSET(0x19C72F30)
#define FLOWCANVAS_FLOWNODE_GET_COMMENTSALIGNMENT_OFFSET UNITYSDK_OFFSET(0x19C72F70)
#define FLOWCANVAS_FLOWNODE_GET_FLOWGRAPH_OFFSET UNITYSDK_OFFSET(0x19C72F90)
#define FLOWCANVAS_FLOWNODE_GET_ICONALIGNMENT_OFFSET UNITYSDK_OFFSET(0x19C72F80)
#define FLOWCANVAS_FLOWNODE_GET_IGNORESELFINSTANCEPORTASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x19C72FF0)
#define FLOWCANVAS_FLOWNODE_GET_ISLASTWAVECHECKNODE_OFFSET UNITYSDK_OFFSET(0x19C76360)
#define FLOWCANVAS_FLOWNODE_GET_ISUSEDDIFFERDATA_OFFSET UNITYSDK_OFFSET(0x19C73D60)
#define FLOWCANVAS_FLOWNODE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x19C72F00)
#define FLOWCANVAS_FLOWNODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x19C72F10)
#define FLOWCANVAS_FLOWNODE_GET_NODEEXERECORDSEQ_OFFSET UNITYSDK_OFFSET(0x19C73810)
#define FLOWCANVAS_FLOWNODE_GET_OUTCONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x19C72F40)
#define FLOWCANVAS_FLOWNODE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x19C72FE0)
#define FLOWCANVAS_FLOWNODE_GET_TINPUTPORTVALUES_OFFSET UNITYSDK_OFFSET(0x19C72EE0)
#define FLOWCANVAS_FLOWNODE_GET_UNIQUEIDSTR_OFFSET UNITYSDK_OFFSET(0x19C73D10)
#define FLOWCANVAS_FLOWNODE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19C73830)
#define FLOWCANVAS_FLOWNODE_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x19C73F20)
#define FLOWCANVAS_FLOWNODE_ISPRELOADDONE_OFFSET UNITYSDK_OFFSET(0x19C76340)
#define FLOWCANVAS_FLOWNODE_ISSERVERCARE_OFFSET UNITYSDK_OFFSET(0x19C73F10)
#define FLOWCANVAS_FLOWNODE_ONCHILDCONNECTED_OFFSET UNITYSDK_OFFSET(0x19C737E0)
#define FLOWCANVAS_FLOWNODE_ONCHILDDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x19C73800)
#define FLOWCANVAS_FLOWNODE_ONPARENTCONNECTED_OFFSET UNITYSDK_OFFSET(0x19C737D0)
#define FLOWCANVAS_FLOWNODE_ONPARENTDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x19C737F0)
#define FLOWCANVAS_FLOWNODE_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x19C73F30)
#define FLOWCANVAS_FLOWNODE_ONPORTDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x19C74090)
#define FLOWCANVAS_FLOWNODE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x19C735C0)
#define FLOWCANVAS_FLOWNODE_QUALIFYPORTNAMEANDID_OFFSET UNITYSDK_OFFSET(0x19C763B0)
#define FLOWCANVAS_FLOWNODE_REFRESHEDITORPORTS_OFFSET UNITYSDK_OFFSET(0x19C76390)
#define FLOWCANVAS_FLOWNODE_REPLACEORREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19C751A0)
#define FLOWCANVAS_FLOWNODE_REPLACEWITH_OFFSET UNITYSDK_OFFSET(0x19C778E0)
#define FLOWCANVAS_FLOWNODE_SET_ISLASTWAVECHECKNODE_OFFSET UNITYSDK_OFFSET(0x19C76370)
#define FLOWCANVAS_FLOWNODE_SET_ISUSEDDIFFERDATA_OFFSET UNITYSDK_OFFSET(0x19C73E40)
#define FLOWCANVAS_FLOWNODE_SET_NODEEXERECORDSEQ_OFFSET UNITYSDK_OFFSET(0x19C73820)
#define FLOWCANVAS_FLOWNODE_SET_TINPUTPORTVALUES_OFFSET UNITYSDK_OFFSET(0x19C72EF0)
#define FLOWCANVAS_FLOWNODE_TRYADDFIELDDELEGATEFLOWOUTPUT_OFFSET UNITYSDK_OFFSET(0x19C77180)
#define FLOWCANVAS_FLOWNODE_TRYADDFIELDDELEGATEVALUEINPUT_OFFSET UNITYSDK_OFFSET(0x19C772C0)
#define FLOWCANVAS_FLOWNODE_TRYADDMETHODFLOWINPUT_OFFSET UNITYSDK_OFFSET(0x19C76A10)
#define FLOWCANVAS_FLOWNODE_TRYADDPROPERTYVALUEOUTPUT_OFFSET UNITYSDK_OFFSET(0x19C76BB0)
#define FLOWCANVAS_FLOWNODE_TRYADDREFLECTIONBASEDREGISTRATIONFOROBJECT_OFFSET UNITYSDK_OFFSET(0x19C76730)
#define FLOWCANVAS_FLOWNODE_TRYGETNEWGENERICMETHODFORWILD_OFFSET UNITYSDK_OFFSET(0x19C78160)
#define FLOWCANVAS_FLOWNODE_TRYGETNEWGENERICTYPEFORWILD_OFFSET UNITYSDK_OFFSET(0x19C77E80)
#define FLOWCANVAS_FLOWNODE_TRYHANDLEWILDPORTCONNECTION_OFFSET UNITYSDK_OFFSET(0x19C74010)
#define FLOWCANVAS_FLOWNODE_TRYREMOVEPORTIFMISSINGANDCLEAN_OFFSET UNITYSDK_OFFSET(0x19C740A0)
#define FLOWCANVAS_FLOWNODE_UNBINDPORTS_OFFSET UNITYSDK_OFFSET(0x19C744C0)
#define FLOWCANVAS_FLOWNODE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19C735B0)
#define FLOWCANVAS_FLOWNODE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19C73000)
#define FLOWCANVAS_FLOWNODE_VALIDATECONNECTIONS_OFFSET UNITYSDK_OFFSET(0x19C76380)
#define FLOWCANVAS_FLOWNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C78350)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode_TypeDefinitionIndex = 25817;

	class FlowNode : public ::NodeCanvas::Framework::Node
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::Port*>* inputPorts; // 0x78
		::System::String* uniqueIdStr; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _inputPortValues; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::Port*>* outputPorts; // 0x90
		::System::Boolean _IsLastWaveCheckNode_k__BackingField; // 0x98
		::System::Int32 _NodeExeRecordSeq_k__BackingField; // 0x9C
		::System::UInt64 uniqueId; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_TInputPortValues()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_TINPUTPORTVALUES_OFFSET))(this);
		}

		::System::Void set_TInputPortValues(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_SET_TINPUTPORTVALUES_OFFSET))(this, value);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::System::Boolean get_canSelfConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_CANSELFCONNECT_OFFSET))(this);
		}

		::System::Type* get_outConnectionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_OUTCONNECTIONTYPE_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_commentsAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_COMMENTSALIGNMENT_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_iconAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_ICONALIGNMENT_OFFSET))(this);
		}

		::FlowCanvas::FlowGraph* get_flowGraph()
		{
			return ((::FlowCanvas::FlowGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_FLOWGRAPH_OFFSET))(this);
		}

		::System::String* get_SPACE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_SPACE_OFFSET))(this);
		}

		::System::Boolean get_ignoreSelfInstancePortAssignment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_IGNORESELFINSTANCEPORTASSIGNMENT_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::Graph* flowGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ONVALIDATE_OFFSET))(this, flowGraph);
		}

		::System::Void OnParentConnected(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ONPARENTCONNECTED_OFFSET))(this, i);
		}

		::System::Void OnChildConnected(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ONCHILDCONNECTED_OFFSET))(this, i);
		}

		::System::Void OnParentDisconnected(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ONPARENTDISCONNECTED_OFFSET))(this, i);
		}

		::System::Void OnChildDisconnected(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ONCHILDDISCONNECTED_OFFSET))(this, i);
		}

		::System::Int32 get_NodeExeRecordSeq()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_NODEEXERECORDSEQ_OFFSET))(this);
		}

		::System::Void set_NodeExeRecordSeq(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_SET_NODEEXERECORDSEQ_OFFSET))(this, value);
		}

		::System::UInt64 get_UniqueID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_UNIQUEID_OFFSET))(this);
		}

		::System::String* get_UniqueIDStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_UNIQUEIDSTR_OFFSET))(this);
		}

		::System::Boolean get_IsUsedDifferData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_ISUSEDDIFFERDATA_OFFSET))(this);
		}

		::System::Void set_IsUsedDifferData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_SET_ISUSEDDIFFERDATA_OFFSET))(this, value);
		}

		::System::Boolean IsServerCare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ISSERVERCARE_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ISCHOICENODE_OFFSET))(this);
		}

		::System::UInt64 GetUniqueId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETUNIQUEID_OFFSET))(this);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}

		::System::Void OnPortDisconnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ONPORTDISCONNECTED_OFFSET))(this, port, otherPort);
		}

		::System::Void BindPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_BINDPORTS_OFFSET))(this);
		}

		::System::Void UnBindPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_UNBINDPORTS_OFFSET))(this);
		}

		::FlowCanvas::Port* GetInputPort(::System::String* ID)
		{
			return ((::FlowCanvas::Port*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETINPUTPORT_OFFSET))(this, ID);
		}

		::FlowCanvas::Port* GetOutputPort(::System::String* ID)
		{
			return ((::FlowCanvas::Port*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETOUTPUTPORT_OFFSET))(this, ID);
		}

		::System::Collections::Generic::IEnumerable_1<::FlowCanvas::Port*>* GetAllPorts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FlowCanvas::Port*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETALLPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::FlowCanvas::FlowOutput*>* GetOutputFlowPorts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FlowCanvas::FlowOutput*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETOUTPUTFLOWPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::FlowCanvas::ValueOutput*>* GetOutputValuePorts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FlowCanvas::ValueOutput*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETOUTPUTVALUEPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::FlowCanvas::FlowInput*>* GetInputFlowPorts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FlowCanvas::FlowInput*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETINPUTFLOWPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::FlowCanvas::ValueInput*>* GetInputValuePorts()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FlowCanvas::ValueInput*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETINPUTVALUEPORTS_OFFSET))(this);
		}

		::FlowCanvas::Port* GetFirstInputOfType(::System::Type* type)
		{
			return ((::FlowCanvas::Port*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETFIRSTINPUTOFTYPE_OFFSET))(this, type);
		}

		::FlowCanvas::Port* GetFirstOutputOfType(::System::Type* type)
		{
			return ((::FlowCanvas::Port*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETFIRSTOUTPUTOFTYPE_OFFSET))(this, type);
		}

		::System::Void AssignSelfInstancePort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ASSIGNSELFINSTANCEPORT_OFFSET))(this);
		}

		::System::Void GatherPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GATHERPORTS_OFFSET))(this);
		}

		::System::Void ReplaceOrRegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_REPLACEORREGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_DOPRELOAD_OFFSET))(this);
		}

		::System::Boolean IsPreloadDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ISPRELOADDONE_OFFSET))(this);
		}

		::System::Void CallOutputByNetwork(::System::UInt32 outputPort)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_CALLOUTPUTBYNETWORK_OFFSET))(this, outputPort);
		}

		::System::Boolean get_IsLastWaveCheckNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GET_ISLASTWAVECHECKNODE_OFFSET))(this);
		}

		::System::Void set_IsLastWaveCheckNode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_SET_ISLASTWAVECHECKNODE_OFFSET))(this, value);
		}

		::System::Void ValidateConnections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_VALIDATECONNECTIONS_OFFSET))(this);
		}

		::System::Void DeserializeInputPortValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_DESERIALIZEINPUTPORTVALUES_OFFSET))(this);
		}

		::System::Void RefreshEditorPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_REFRESHEDITORPORTS_OFFSET))(this);
		}

		::FlowCanvas::FlowInput* AddFlowInput(::System::String* name, ::System::String* ID, ::FlowCanvas::FlowHandler* pointer)
		{
			return ((::FlowCanvas::FlowInput*(*)(::PVOID, ::System::String*, ::System::String*, ::FlowCanvas::FlowHandler*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ADDFLOWINPUT_OFFSET))(this, name, ID, pointer);
		}

		::FlowCanvas::FlowInput* AddFlowInput_1(::System::String* name, ::FlowCanvas::FlowHandler* pointer, ::System::String* ID)
		{
			return ((::FlowCanvas::FlowInput*(*)(::PVOID, ::System::String*, ::FlowCanvas::FlowHandler*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ADDFLOWINPUT_1_OFFSET))(this, name, pointer, ID);
		}

		::FlowCanvas::FlowOutput* AddFlowOutput(::System::String* name, ::System::String* ID)
		{
			return ((::FlowCanvas::FlowOutput*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ADDFLOWOUTPUT_OFFSET))(this, name, ID);
		}

		::FlowCanvas::ValueInput* AddValueInput(::System::String* name, ::System::String* ID, ::System::Type* type)
		{
			return ((::FlowCanvas::ValueInput*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ADDVALUEINPUT_OFFSET))(this, name, ID, type);
		}

		::FlowCanvas::ValueInput* AddValueInput_1(::System::String* name, ::System::Type* type, ::System::String* ID)
		{
			return ((::FlowCanvas::ValueInput*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ADDVALUEINPUT_1_OFFSET))(this, name, type, ID);
		}

		::FlowCanvas::ValueOutput* AddValueOutput(::System::String* name, ::System::String* ID, ::System::Type* type, ::FlowCanvas::ValueHandlerObject* getter)
		{
			return ((::FlowCanvas::ValueOutput*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Type*, ::FlowCanvas::ValueHandlerObject*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ADDVALUEOUTPUT_OFFSET))(this, name, ID, type, getter);
		}

		::FlowCanvas::ValueOutput* AddValueOutput_1(::System::String* name, ::System::Type* type, ::FlowCanvas::ValueHandlerObject* getter, ::System::String* ID)
		{
			return ((::FlowCanvas::ValueOutput*(*)(::PVOID, ::System::String*, ::System::Type*, ::FlowCanvas::ValueHandlerObject*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_ADDVALUEOUTPUT_1_OFFSET))(this, name, type, getter, ID);
		}

		::System::Void QualifyPortNameAndID(::System::String*& name, ::System::String*& ID, ::System::Collections::IDictionary* dict)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_QUALIFYPORTNAMEANDID_OFFSET))(this, name, ID, dict);
		}

		::System::Boolean CheckReverseIDEquality(::FlowCanvas::Port* port, ::System::String* requestedID)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Port*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_CHECKREVERSEIDEQUALITY_OFFSET))(this, port, requestedID);
		}

		::System::Void TryAddReflectionBasedRegistrationForObject(::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYADDREFLECTIONBASEDREGISTRATIONFOROBJECT_OFFSET))(this, instance);
		}

		::FlowCanvas::FlowInput* TryAddMethodFlowInput(::System::Reflection::MethodInfo* method, ::System::Object* instance)
		{
			return ((::FlowCanvas::FlowInput*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYADDMETHODFLOWINPUT_OFFSET))(this, method, instance);
		}

		::FlowCanvas::FlowOutput* TryAddFieldDelegateFlowOutput(::System::Reflection::FieldInfo* field, ::System::Object* instance)
		{
			return ((::FlowCanvas::FlowOutput*(*)(::PVOID, ::System::Reflection::FieldInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYADDFIELDDELEGATEFLOWOUTPUT_OFFSET))(this, field, instance);
		}

		::FlowCanvas::ValueInput* TryAddFieldDelegateValueInput(::System::Reflection::FieldInfo* field, ::System::Object* instance)
		{
			return ((::FlowCanvas::ValueInput*(*)(::PVOID, ::System::Reflection::FieldInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYADDFIELDDELEGATEVALUEINPUT_OFFSET))(this, field, instance);
		}

		::FlowCanvas::ValueOutput* TryAddPropertyValueOutput(::System::Reflection::PropertyInfo* prop, ::System::Object* instance)
		{
			return ((::FlowCanvas::ValueOutput*(*)(::PVOID, ::System::Reflection::PropertyInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYADDPROPERTYVALUEOUTPUT_OFFSET))(this, prop, instance);
		}

		::FlowCanvas::FlowNode* ReplaceWith(::System::Type* t)
		{
			return ((::FlowCanvas::FlowNode*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_REPLACEWITH_OFFSET))(this, t);
		}

		::System::Void TryRemovePortIfMissingAndClean(::FlowCanvas::Port* port)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYREMOVEPORTIFMISSINGANDCLEAN_OFFSET))(this, port);
		}

		::System::Type* GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void TryHandleWildPortConnection(::System::Type* currentType, ::System::Type* targetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYHANDLEWILDPORTCONNECTION_OFFSET))(this, currentType, targetType);
		}

		static ::System::Type* TryGetNewGenericTypeForWild(::System::Type* wildType, ::System::Type* currentType, ::System::Type* targetType, ::System::Type* content, ::System::Type* context)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*, ::System::Type*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYGETNEWGENERICTYPEFORWILD_OFFSET))(wildType, currentType, targetType, content, context);
		}

		static ::System::Reflection::MethodInfo* TryGetNewGenericMethodForWild(::System::Type* wildType, ::System::Type* currentType, ::System::Type* targetType, ::System::Reflection::MethodInfo* content)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE_TRYGETNEWGENERICMETHODFORWILD_OFFSET))(wildType, currentType, targetType, content);
		}
	};
}
