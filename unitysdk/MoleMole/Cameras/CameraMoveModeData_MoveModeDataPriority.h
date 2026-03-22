#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeDataPriority_TypeDefinitionIndex = 62638;

	enum class CameraMoveModeData_MoveModeDataPriority : ::System::Byte
	{
		MidPriorityData = 0x63,
		HighPriorityData = 0xE1,
		Default = 0x1,
		SwitchAvatarOrbital = 0x62,
		LockTargetOrbital = 0x61,
		NormalData = 0xA,
		AimMode = 0xC8,
		DragOrbital = 0x64,
	};
}
