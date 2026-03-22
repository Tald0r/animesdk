#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX_PROCESS_OFFSET UNITYSDK_OFFSET(0x678B2D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x678B1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x678B700)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x678B720)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReCreateAvatarByIndex_TypeDefinitionIndex = 40155;

	class LD_ReCreateAvatarByIndex : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* _flowOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* TargetAvatarIndex; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATEAVATARBYINDEX__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
