#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class Variable; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class Object; }
namespace System { class String; }

#define FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19549EE0)
#define FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x19549FB0)
#define FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1954A120)
#define FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1954A2E0)
#define FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_ONVARIABLEREFCHANGE_OFFSET UNITYSDK_OFFSET(0x1954A330)
#define FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1954A200)
#define FLOWCANVAS_NODES_VARIABLECHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1954A3A0)
#define FLOWCANVAS_NODES_VARIABLECHANGEDEVENT__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1954A3C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int VariableChangedEvent_TypeDefinitionIndex = 26570;

	class VariableChangedEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* fOut; // 0xA8
		::NodeCanvas::Framework::Internal::BBObjectParameter* targetVariable; // 0xB0
		::System::Object* newValue; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VARIABLECHANGEDEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void OnVariableRefChange(::NodeCanvas::Framework::Variable* newVarRef)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Variable*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VARIABLECHANGEDEVENT_ONVARIABLEREFCHANGE_OFFSET))(this, newVarRef);
		}

		::System::Object* _RegisterPorts_b__7_0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VARIABLECHANGEDEVENT__REGISTERPORTS_B__7_0_OFFSET))(this);
		}
	};
}
