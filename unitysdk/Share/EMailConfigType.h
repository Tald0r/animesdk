#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMailConfigType_TypeDefinitionIndex = 13750;

	enum class EMailConfigType : ::System::Int16
	{
		Common = 0,
		Operation = 1,
		UserDefine = 2,
	};
}
