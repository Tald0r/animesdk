#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_SceneType_TypeDefinitionIndex = 63111;

	enum class ConfigUICommon_Input_SceneType : ::System::Int32
	{
		Bangboo = 4,
		TriggerTPS = 5,
		MainCity = 2,
		Hollow = 3,
		BigScene = 6,
		None = 0,
		InLevel = 1,
	};
}
