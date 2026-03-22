#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas::Macros { class Macro; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework::Internal { class BBMappingParameter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19DFFEF0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_MACRO_OFFSET UNITYSDK_OFFSET(0x19E00040)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19DFFE40)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_MAKEINSTANCEWITHOUTGATHERPORTS_OFFSET UNITYSDK_OFFSET(0x19E00520)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_MAKEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19E00500)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_CURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x19E00350)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_INSTANCES_OFFSET UNITYSDK_OFFSET(0x19E003E0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x19E003D0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x19E001B0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_VARIABLESMAP_OFFSET UNITYSDK_OFFSET(0x19E003B0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_CURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x19E00360)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_INSTANCES_OFFSET UNITYSDK_OFFSET(0x19E004B0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x19E001C0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_VARIABLESMAP_OFFSET UNITYSDK_OFFSET(0x19E003C0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E006A0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19E00790)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19E00940)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_SET_MACRO_OFFSET UNITYSDK_OFFSET(0x19E00050)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_SET_TMACRO_OFFSET UNITYSDK_OFFSET(0x19E001A0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E010E0)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroNodeWrapper_TypeDefinitionIndex = 25312;

	class MacroNodeWrapper : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::Macros::Macro* _currentInstance; // 0xA8
		::FlowCanvas::Macros::Macro* _macro; // 0xB0
		::System::Boolean hasInstanced; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_DESCRIPTION_OFFSET))(this);
		}

		::FlowCanvas::Macros::Macro* get_macro()
		{
			return ((::FlowCanvas::Macros::Macro*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_MACRO_OFFSET))(this);
		}

		::System::Void set_macro(::FlowCanvas::Macros::Macro* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Macros::Macro*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_SET_MACRO_OFFSET))(this, value);
		}

		::System::Void set_TMacro(::FlowCanvas::Macros::Macro* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Macros::Macro*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_SET_TMACRO_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Graph* NodeCanvas_Framework_IGraphAssignable_get_subGraph()
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IGraphAssignable_set_subGraph(::NodeCanvas::Framework::Graph* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Graph* NodeCanvas_Framework_IGraphAssignable_get_currentInstance()
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_CURRENTINSTANCE_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IGraphAssignable_set_currentInstance(::NodeCanvas::Framework::Graph* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_CURRENTINSTANCE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>* NodeCanvas_Framework_IGraphAssignable_get_variablesMap()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_VARIABLESMAP_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IGraphAssignable_set_variablesMap(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_VARIABLESMAP_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* NodeCanvas_Framework_IGraphAssignable_get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>* NodeCanvas_Framework_IGraphAssignable_get_instances()
		{
			return ((::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_INSTANCES_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IGraphAssignable_set_instances(::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_INSTANCES_OFFSET))(this, value);
		}

		::System::Void MakeInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_MAKEINSTANCE_OFFSET))(this);
		}

		::System::Void MakeInstanceWithoutGatherPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_MAKEINSTANCEWITHOUTGATHERPORTS_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_REGISTERPORTS_OFFSET))(this);
		}
	};
}
