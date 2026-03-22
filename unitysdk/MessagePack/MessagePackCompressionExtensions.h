#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackCompression.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_MESSAGEPACKCOMPRESSIONEXTENSIONS_ISCOMPRESSION_OFFSET UNITYSDK_OFFSET(0x19E05FE0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackCompressionExtensions_TypeDefinitionIndex = 26302;

	class MessagePackCompressionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsCompression(::MessagePack::MessagePackCompression compression)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackCompression))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKCOMPRESSIONEXTENSIONS_ISCOMPRESSION_OFFSET))(compression);
		}
	};
}
