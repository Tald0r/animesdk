#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCompression_TypeDefinitionIndex = 26091;

	enum class MessagePackCompression : ::System::Int32
	{
		Lz4Block = 1,
		Lz4BlockArray = 2,
		None = 0,
	};
}
