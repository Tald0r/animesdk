#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D7B028BA5CC069E1.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_BETWEENPROCESS_OFFSET UNITYSDK_OFFSET(0x678EE70)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_EQUALPROCESS_OFFSET UNITYSDK_OFFSET(0x678E9D0)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_GREATEREQUALBREAKPROCESS_OFFSET UNITYSDK_OFFSET(0x678F210)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_GREATEREQUALPROCESS_OFFSET UNITYSDK_OFFSET(0x678EC20)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x678E730)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x678F440)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x678F4C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchFloatCustom_TypeDefinitionIndex = 39476;

	class SwitchFloatCustom : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* selector; // 0xA8
		::FlowCanvas::ValueInput_1<::Enum_3_D7B028BA5CC069E1>* compareType; // 0xB0
		::FlowCanvas::FlowOutput* defaultCase; // 0xB8
		::System::Collections::Generic::List_1<::System::Single>* floatCases; // 0xC0
		::Il2CppArray<::FlowCanvas::FlowOutput*>* cases; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void EqualProcess(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_EQUALPROCESS_OFFSET))(this, f);
		}

		::System::Void GreaterEqualProcess(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_GREATEREQUALPROCESS_OFFSET))(this, f);
		}

		::System::Void BetweenProcess(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_BETWEENPROCESS_OFFSET))(this, f);
		}

		::System::Void GreaterEqualBreakProcess(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_GREATEREQUALBREAKPROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}
	};
}
