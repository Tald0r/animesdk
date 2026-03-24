#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace UnityEngine::UI { class Slider; }

#define FLOWCANVAS_NODES_UISLIDEREVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A602DB0)
#define FLOWCANVAS_NODES_UISLIDEREVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A602CC0)
#define FLOWCANVAS_NODES_UISLIDEREVENT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A602FA0)
#define FLOWCANVAS_NODES_UISLIDEREVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A602EC0)
#define FLOWCANVAS_NODES_UISLIDEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A602FF0)
#define FLOWCANVAS_NODES_UISLIDEREVENT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A603020)
#define FLOWCANVAS_NODES_UISLIDEREVENT__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A603080)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UISliderEvent_TypeDefinitionIndex = 26490;

	class UISliderEvent : public ::FlowCanvas::Nodes::EventNode_1<::UnityEngine::UI::Slider*>
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xB0
		::System::Single value; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISLIDEREVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISLIDEREVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISLIDEREVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISLIDEREVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISLIDEREVENT_ONVALUECHANGED_OFFSET))(this, value);
		}

		::UnityEngine::UI::Slider* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::UI::Slider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISLIDEREVENT__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__4_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISLIDEREVENT__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
