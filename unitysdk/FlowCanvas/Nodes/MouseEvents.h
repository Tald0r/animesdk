#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"
#include "unitysdk/FlowCanvas/Nodes/MouseEvents_ButtonKeys.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define FLOWCANVAS_NODES_MOUSEEVENTS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19FE8BC0)
#define FLOWCANVAS_NODES_MOUSEEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19FE8C90)
#define FLOWCANVAS_NODES_MOUSEEVENTS_UPDATE_OFFSET UNITYSDK_OFFSET(0x19FE8D20)
#define FLOWCANVAS_NODES_MOUSEEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE8D30)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MouseEvents_TypeDefinitionIndex = 26784;

	class MouseEvents : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* down; // 0xA8
		::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::Nodes::MouseEvents_ButtonKeys>* buttonKey; // 0xB0
		::FlowCanvas::FlowOutput* up; // 0xB8
		::FlowCanvas::FlowOutput* pressed; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEEVENTS__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEEVENTS_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEEVENTS_UPDATE_OFFSET))(this);
		}
	};
}
