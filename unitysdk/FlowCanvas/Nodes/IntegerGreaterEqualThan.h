#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define FLOWCANVAS_NODES_INTEGERGREATEREQUALTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C79C50)
#define FLOWCANVAS_NODES_INTEGERGREATEREQUALTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x19C79C60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerGreaterEqualThan_TypeDefinitionIndex = 26303;

	class IntegerGreaterEqualThan : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERGREATEREQUALTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERGREATEREQUALTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
