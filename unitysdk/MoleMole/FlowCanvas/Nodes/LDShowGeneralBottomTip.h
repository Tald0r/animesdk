#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xF1AAF90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP__CTOR_OFFSET UNITYSDK_OFFSET(0xF1AB0E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0xF1AB100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowGeneralBottomTip_TypeDefinitionIndex = 60379;

	class LDShowGeneralBottomTip : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* textMapKey; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* duration; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWGENERALBOTTOMTIP__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
