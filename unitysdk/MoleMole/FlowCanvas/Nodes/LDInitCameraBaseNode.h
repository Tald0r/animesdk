#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE_INITCAMERABASE_OFFSET UNITYSDK_OFFSET(0xC2149D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0xC214A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xC214AE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInitCameraBaseNode_TypeDefinitionIndex = 65760;

	class LDInitCameraBaseNode : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE__CTOR_OFFSET))(this);
		}

		::System::Void InitCameraBase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE_INITCAMERABASE_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE_INVOKE_OFFSET))(this);
		}
	};
}
