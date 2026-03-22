#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeState_TypeDefinitionIndex = 62639;

	enum class CameraMoveModeData_MoveModeState : ::System::Int32
	{
		DelayStart = 1,
		Dead = 3,
		Acting = 2,
		Null = 0,
	};
}
