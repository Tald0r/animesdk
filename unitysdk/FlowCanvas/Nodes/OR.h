#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_OR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A261D50)
#define FLOWCANVAS_NODES_OR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A261D60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int OR_TypeDefinitionIndex = 25444;

	class OR : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OR__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OR_INVOKE_OFFSET))(this, a, b);
		}
	};
}
