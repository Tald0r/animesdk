#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventGraphOwnerType_TypeDefinitionIndex = 10501;

	enum class EEventGraphOwnerType : ::System::Int16
	{
		Section = 1,
		Hollow = 3,
		SceneUnit = 2,
		Scene = 0,
	};
}
