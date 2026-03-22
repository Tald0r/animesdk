#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderReadyFlag_TypeDefinitionIndex = 49678;

	enum class ViewObjectManager_GroupOrderReadyFlag : ::System::Int32
	{
		LoadingFlag = 1,
		None = 0,
		PostLoadedFlag = 2,
	};
}
