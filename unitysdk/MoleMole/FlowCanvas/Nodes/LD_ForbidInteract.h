#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_FORBIDINTERACT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA5ED7A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_FORBIDINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EDFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_FORBIDINTERACT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0xA5EDFC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_FORBIDINTERACT__STARTMUTE_OFFSET UNITYSDK_OFFSET(0xA5ED8F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ForbidInteract_TypeDefinitionIndex = 53306;

	class LD_ForbidInteract : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isForbid; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* interactTag; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* ownerEntity; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_FORBIDINTERACT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_FORBIDINTERACT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _StartMute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_FORBIDINTERACT__STARTMUTE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_FORBIDINTERACT__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
