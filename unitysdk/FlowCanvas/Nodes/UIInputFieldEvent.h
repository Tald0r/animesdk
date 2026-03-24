#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }
namespace UnityEngine::UI { class InputField; }

#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1A82A430)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A82A140)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A829F50)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A82A3E0)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A82A2E0)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A82A480)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A82A4B0)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A82A510)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UIInputFieldEvent_TypeDefinitionIndex = 26836;

	class UIInputFieldEvent : public ::FlowCanvas::Nodes::EventNode_1<::UnityEngine::UI::InputField*>
	{
	public:
		::System::String* value; // 0xB0
		::FlowCanvas::FlowOutput* onEndEdit; // 0xB8
		::FlowCanvas::FlowOutput* onValueChanged; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void OnEndEdit(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONENDEDIT_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::UI::InputField*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__5_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
