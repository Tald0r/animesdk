#pragma once
#include "unitysdk/unitysdk.h"

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int MoveType_TypeDefinitionIndex = 72820;

	enum class MoveType : ::System::Int32
	{
		Once = 2,
		None = 0,
		Loop = 1,
	};
}
