#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_INJECTSKIPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60E740)

namespace IFix
{
	inline static constexpr unsigned int InjectSkipAttribute_TypeDefinitionIndex = 80398;

	class InjectSkipAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_INJECTSKIPATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
