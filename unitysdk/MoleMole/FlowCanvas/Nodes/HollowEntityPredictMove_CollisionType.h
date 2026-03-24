#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityPredictMove_CollisionType_TypeDefinitionIndex = 42795;

	enum class HollowEntityPredictMove_CollisionType : ::System::Int32
	{
		UseEntityCollisionMask = 1,
		IgnoreAllCollision = 0,
	};
}
