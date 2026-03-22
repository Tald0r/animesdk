#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDFariyTipCountDown; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEC771D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN___C__DISPLAYCLASS5_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0xEC771E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFariyTipCountDown___c__DisplayClass5_0_TypeDefinitionIndex = 58116;

	class LDFariyTipCountDown___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDFariyTipCountDown* __4__this; // 0x10
		::FlowCanvas::Flow f; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFARIYTIPCOUNTDOWN___C__DISPLAYCLASS5_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
