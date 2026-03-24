#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PanelType_TypeDefinitionIndex = 63106;

	enum class ConfigUICommon_Input_PanelType : ::System::Int32
	{
		Hollow_JoyStick = 31,
		InLevel_JoyStick = 11,
		MainCity_Action = 22,
		Bangboo_JoyStick = 41,
		InLevel_Action = 12,
		None = 0,
		MainCity_JoyStick = 21,
		InLevel_QTE = 13,
		TriggerTPS_Action = 52,
		BigScene_JoyStick = 61,
		TriggerTPS_JoyStick = 51,
		Bangboo_Action = 42,
		BigScene_Action = 62,
	};
}
