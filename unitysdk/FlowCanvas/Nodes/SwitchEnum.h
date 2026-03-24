#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class Port; }
namespace ParadoxNotion::Serialization { class SerializedTypeInfo; }
namespace System { class Type; }

#define FLOWCANVAS_NODES_SWITCHENUM_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A47E110)
#define FLOWCANVAS_NODES_SWITCHENUM_GET_STYPE_OFFSET UNITYSDK_OFFSET(0x1A47DCD0)
#define FLOWCANVAS_NODES_SWITCHENUM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A47DCB0)
#define FLOWCANVAS_NODES_SWITCHENUM_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1A47E100)
#define FLOWCANVAS_NODES_SWITCHENUM_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A47E140)
#define FLOWCANVAS_NODES_SWITCHENUM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A47DD70)
#define FLOWCANVAS_NODES_SWITCHENUM_SET_STYPE_OFFSET UNITYSDK_OFFSET(0x1A47DCF0)
#define FLOWCANVAS_NODES_SWITCHENUM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A47DCC0)
#define FLOWCANVAS_NODES_SWITCHENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47E2F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchEnum_TypeDefinitionIndex = 26299;

	class SwitchEnum : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::ParadoxNotion::Serialization::SerializedTypeInfo* _type; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::SerializedTypeInfo* get_type()
		{
			return ((::ParadoxNotion::Serialization::SerializedTypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::ParadoxNotion::Serialization::SerializedTypeInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::SerializedTypeInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_SET_TYPE_OFFSET))(this, value);
		}

		::System::Type* get_SType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_GET_STYPE_OFFSET))(this);
		}

		::System::Void set_SType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_SET_STYPE_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_ISCHOICENODE_OFFSET))(this);
		}

		::System::Type* GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHENUM_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}
	};
}
