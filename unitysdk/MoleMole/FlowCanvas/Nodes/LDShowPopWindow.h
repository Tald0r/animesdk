#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UITutorialDialog; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0xB5D9A10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xB5D9890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D9C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0xB5D9C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0xB5DA170)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_2_OFFSET UNITYSDK_OFFSET(0xB5DA130)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___BASE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0xB5DA1B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowPopWindow_TypeDefinitionIndex = 39577;

	class LDShowPopWindow : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* onClosed; // 0xA8
		::MoleMole::UITutorialDialog* preloadDialog; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* popID; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* isServerOnce; // 0xC8
		::FlowCanvas::FlowOutput* notOpen; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* showPage; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW_DOPRELOAD_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_2_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW__REGISTERPORTS_B__7_1_OFFSET))(this);
		}

		::System::Void __base_DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWPOPWINDOW___BASE_DOPRELOAD_OFFSET))(this);
		}
	};
}
