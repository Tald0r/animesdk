#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_DA02E6BABB5F027E;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSet_1_TypeDefinitionIndex = 52594;

	template <typename T>
	class LDPublicVariableSet_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _key; // 0x0
		::FlowCanvas::ValueInput_1<T>* _val; // 0x0
		::FlowCanvas::FlowOutput* _output; // 0x0
	};
}
