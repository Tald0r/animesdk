#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR_INVOKE_OFFSET UNITYSDK_OFFSET(0xF1B0B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xF1B0C20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnableAvatar_TypeDefinitionIndex = 77488;

	class LD_EnableAvatar : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR_INVOKE_OFFSET))(this, isEnable);
		}
	};
}
