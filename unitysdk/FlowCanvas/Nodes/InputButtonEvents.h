#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define FLOWCANVAS_NODES_INPUTBUTTONEVENTS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A39E310)
#define FLOWCANVAS_NODES_INPUTBUTTONEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A39E3E0)
#define FLOWCANVAS_NODES_INPUTBUTTONEVENTS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A39E470)
#define FLOWCANVAS_NODES_INPUTBUTTONEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39E480)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int InputButtonEvents_TypeDefinitionIndex = 27368;

	class InputButtonEvents : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* buttonName; // 0xA8
		::FlowCanvas::FlowOutput* up; // 0xB0
		::FlowCanvas::FlowOutput* pressed; // 0xB8
		::FlowCanvas::FlowOutput* down; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTBUTTONEVENTS__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTBUTTONEVENTS_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTBUTTONEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTBUTTONEVENTS_UPDATE_OFFSET))(this);
		}
	};
}
