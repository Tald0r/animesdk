#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeDataPriority_TypeDefinitionIndex = 40346;

	enum class CameraMoveModeData_MoveModeDataPriority : ::System::Byte
	{
		NormalData = 0xA,
		HighPriorityData = 0xE1,
		LockTargetOrbital = 0x61,
		Default = 0x1,
		SwitchAvatarOrbital = 0x62,
		MidPriorityData = 0x63,
		AimMode = 0xC8,
		DragOrbital = 0x64,
	};
}
