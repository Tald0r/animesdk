#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB82AEA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB82B030)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetMonsterCardPlayMode_TypeDefinitionIndex = 51123;

	class LDGetMonsterCardPlayMode : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE_INVOKE_OFFSET))(this);
		}
	};
}
