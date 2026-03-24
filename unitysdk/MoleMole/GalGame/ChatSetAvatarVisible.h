#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatSetAvatarVisible_TypeDefinitionIndex = 75669;

	enum class ChatSetAvatarVisible : ::System::Int32
	{
		Hide = 1,
		Visible = 2,
		None = 0,
	};
}
