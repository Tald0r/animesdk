#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailConfigType_TypeDefinitionIndex = 17568;

	enum class EMailConfigType : ::System::Int16
	{
		Operation = 1,
		Common = 0,
		UserDefine = 2,
	};
}
