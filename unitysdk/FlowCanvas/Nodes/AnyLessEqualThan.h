#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace System { class IComparable; }

#define FLOWCANVAS_NODES_ANYLESSEQUALTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DAB860)
#define FLOWCANVAS_NODES_ANYLESSEQUALTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAB970)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnyLessEqualThan_TypeDefinitionIndex = 26111;

	class AnyLessEqualThan : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::IComparable*, ::System::IComparable*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYLESSEQUALTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::IComparable* a, ::System::IComparable* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IComparable*, ::System::IComparable*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYLESSEQUALTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
