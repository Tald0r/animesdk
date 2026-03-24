#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineLocatorComponent.h"

#define NPCCROWD_AI_PATHGRAPHSPLINECONTROLPOINTLOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x69D9600)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineControlPointLocatorComponent_TypeDefinitionIndex = 45706;

	class PathGraphSplineControlPointLocatorComponent : public ::NPCCrowd::AI::PathGraphSplineLocatorComponent
	{
	public:
		::System::Int32 nearestSplineNodePointIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONTROLPOINTLOCATORCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
