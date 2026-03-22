#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY_BEGIN_OFFSET UNITYSDK_OFFSET(0x82C73F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x82C71E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x82C7800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCountDownModify_TypeDefinitionIndex = 61088;

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
