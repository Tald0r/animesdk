#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_BEGIN_OFFSET UNITYSDK_OFFSET(0xC2CBBA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_CLOSE_OFFSET UNITYSDK_OFFSET(0xC2CBFE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_GETTOTALTIME_OFFSET UNITYSDK_OFFSET(0xC2CC0A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xC2CBA80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_SHOWCOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0xC2CBC60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xC2CC120)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_MPCountDown_TypeDefinitionIndex = 67636;

	class LD_MPCountDown : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* outputCB; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_BEGIN_OFFSET))(this, f);
		}

		::System::Void Close(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_CLOSE_OFFSET))(this, f);
		}

		::System::Single GetTotalTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_GETTOTALTIME_OFFSET))(this);
		}

		::System::Void ShowCountDownUI(::System::Boolean showState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPCOUNTDOWN_SHOWCOUNTDOWNUI_OFFSET))(this, showState);
		}
	};
}
