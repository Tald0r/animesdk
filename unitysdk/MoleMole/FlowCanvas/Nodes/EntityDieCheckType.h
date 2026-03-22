#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EntityDieCheckType_TypeDefinitionIndex = 42710;

	enum class EntityDieCheckType : ::System::Int32
	{
		DeadShot = 2,
		ZeroHp = 0,
		EntityDestroy = 1,
	};
}
