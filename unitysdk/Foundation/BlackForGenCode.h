#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define FOUNDATION_BLACKFORGENCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA4F5C0)

namespace Foundation
{
	inline static constexpr unsigned int BlackForGenCode_TypeDefinitionIndex = 8077;

	class BlackForGenCode : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BLACKFORGENCODE__CTOR_OFFSET))(this);
		}
	};
}
