#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Node; }

#define CLASS_1_6DFFC6C08791855D_METHOD_1_1D321948F5DCF902_OFFSET UNITYSDK_OFFSET(0xA2925C0)
#define CLASS_1_6DFFC6C08791855D_METHOD_1_9371E718992F00A0_OFFSET UNITYSDK_OFFSET(0xA2926D0)

inline static constexpr unsigned int Class_1_6DFFC6C08791855D_TypeDefinitionIndex = 40472;

class Class_1_6DFFC6C08791855D : public ::System::Object
{
public:
	static ::NodeCanvas::Framework::Graph* Method_1_1D321948F5DCF902(::NodeCanvas::Framework::Node* a1)
	{
		return ((::NodeCanvas::Framework::Graph*(*)(::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + CLASS_1_6DFFC6C08791855D_METHOD_1_1D321948F5DCF902_OFFSET))(a1);
	}

	static ::NodeCanvas::Framework::IBlackboard* Method_1_9371E718992F00A0(::NodeCanvas::Framework::Node* a1)
	{
		return ((::NodeCanvas::Framework::IBlackboard*(*)(::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + CLASS_1_6DFFC6C08791855D_METHOD_1_9371E718992F00A0_OFFSET))(a1);
	}
};
