#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigAvatarDateTeleport; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define NODEGRAPH_GRAPHLOGICUTIL___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x781DD00)
#define NODEGRAPH_GRAPHLOGICUTIL___C__DISPLAYCLASS6_0__TELEPORTTOPOS_B__0_OFFSET UNITYSDK_OFFSET(0x781DD10)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphLogicUtil___c__DisplayClass6_0_TypeDefinitionIndex = 48938;

	class GraphLogicUtil___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x10
		::MoleMole::ConfigAvatarDateTeleport* config; // 0x18
		::System::Action* callback; // 0x20
		::UnityEngine::Vector3 switchInPos; // 0x28
		::System::Single faceDir; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _TeleportToPos_b__0(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHLOGICUTIL___C__DISPLAYCLASS6_0__TELEPORTTOPOS_B__0_OFFSET))(this, id);
		}
	};
}
