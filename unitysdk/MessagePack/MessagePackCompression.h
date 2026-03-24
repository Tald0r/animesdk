#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCompression_TypeDefinitionIndex = 27383;

	enum class MessagePackCompression : ::System::Int32
	{
		Lz4Block = 1,
		None = 0,
		Lz4BlockArray = 2,
	};
}
