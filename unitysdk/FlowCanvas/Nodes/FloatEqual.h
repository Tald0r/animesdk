#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_FLOATEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C17D70)
#define FLOWCANVAS_NODES_FLOATEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C17D80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatEqual_TypeDefinitionIndex = 27516;

	class FloatEqual : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
