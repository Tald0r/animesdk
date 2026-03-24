#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventGraphOwnerType_TypeDefinitionIndex = 15980;

	enum class EEventGraphOwnerType : ::System::Int16
	{
		Scene = 0,
		Hollow = 3,
		SceneUnit = 2,
		Section = 1,
	};
}
