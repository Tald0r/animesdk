#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_KeyInfo_TypeDefinitionIndex = 2464;

	enum class PKCS8_KeyInfo : ::System::Int32
	{
		PrivateKey = 0,
		EncryptedPrivateKey = 1,
		Unknown = 2,
	};
}
