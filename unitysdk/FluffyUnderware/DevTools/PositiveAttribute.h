#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/MinAttribute.h"

#define FLUFFYUNDERWARE_DEVTOOLS_POSITIVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80DC00)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PositiveAttribute_TypeDefinitionIndex = 25353;

	class PositiveAttribute : public ::FluffyUnderware::DevTools::MinAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POSITIVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
