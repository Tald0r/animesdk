#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator
{
	inline static constexpr unsigned int EntityTargetType_TypeDefinitionIndex = 65649;

	enum class EntityTargetType : ::System::Int32
	{
		LockTarget = 1,
		LocalAvatar = 2,
		Custom = 3,
		Self = 0,
	};
}
