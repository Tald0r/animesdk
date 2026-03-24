#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_INTERRUPT_INVOKE_OFFSET UNITYSDK_OFFSET(0xB837570)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_INTERRUPT__CTOR_OFFSET UNITYSDK_OFFSET(0xB8376B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SceneVideo_Interrupt_TypeDefinitionIndex = 43770;

	class LD_SceneVideo_Interrupt : public ::FlowCanvas::Nodes::CallableActionNode_1<::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_INTERRUPT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_INTERRUPT_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
