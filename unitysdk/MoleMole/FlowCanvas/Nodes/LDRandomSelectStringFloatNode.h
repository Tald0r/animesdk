#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDRandomSelectBase_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTSTRINGFLOATNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8AF9700)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTSTRINGFLOATNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x8AF9840)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomSelectStringFloatNode_TypeDefinitionIndex = 57199;

	class LDRandomSelectStringFloatNode : public ::MoleMole::FlowCanvas::Nodes::LDRandomSelectBase_2<::System::String*, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTSTRINGFLOATNODE__CTOR_OFFSET))(this);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMSELECTSTRINGFLOATNODE_INVOKE_OFFSET))(this);
		}
	};
}
