#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY_BEGIN_OFFSET UNITYSDK_OFFSET(0xA381460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA381250)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xA381870)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCountDownModify_TypeDefinitionIndex = 73801;

	class LDCountDownModify : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* _modifyPatch; // 0xA8
		::FlowCanvas::FlowOutput* outputCB; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* deltaTime; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY_BEGIN_OFFSET))(this, f);
		}
	};
}
