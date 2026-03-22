#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChatPopShow_ChatCameraType_TypeDefinitionIndex = 61469;

	enum class ChatPopShow_ChatCameraType : ::System::Int32
	{
		Multiple = 1,
		Solo = 0,
		Default = 0,
		Fixed = 2,
	};
}
