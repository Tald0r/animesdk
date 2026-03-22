#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x6E218C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER_REVERT_OFFSET UNITYSDK_OFFSET(0x6E21C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER_START_OFFSET UNITYSDK_OFFSET(0x6E21A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER__CTOR_OFFSET UNITYSDK_OFFSET(0x6E21EF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x6E21F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x6E21F40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetDynamicOverrideWeather_TypeDefinitionIndex = 78878;

	class LD_SetDynamicOverrideWeather : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* weatherKey; // 0xA8
		::FlowCanvas::FlowOutput* Output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* immediateKey; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER_START_OFFSET))(this, f);
		}

		::System::Void Revert(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER_REVERT_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHER__REGISTERPORTS_B__3_1_OFFSET))(this, f);
		}
	};
}
