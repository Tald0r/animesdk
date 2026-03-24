#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace System { class IComparable; }

#define FLOWCANVAS_NODES_ANYGREATERTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A560F70)
#define FLOWCANVAS_NODES_ANYGREATERTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A561050)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnyGreaterThan_TypeDefinitionIndex = 27120;

	class AnyGreaterThan : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::System::IComparable*, ::System::IComparable*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYGREATERTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::IComparable* a, ::System::IComparable* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IComparable*, ::System::IComparable*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYGREATERTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
